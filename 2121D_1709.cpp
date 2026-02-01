//-----Shoodler-----//
//_____Per Audacia, Ad Astra_____//
//17-06-2025

#include <bits/stdc++.h>
using namespace std;

struct Op {               // one operation record
    int type, idx;        // (type ∈ {1,2,3}, 1‑based idx)
};

void solve_one() {
    int n;                // length of the arrays
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    vector<Op> ops;       // sequence of performed operations

    auto swap_row_a = [&](int i) {            // i is 0‑based
        swap(a[i], a[i + 1]);
        ops.push_back({1, i + 1});
    };
    auto swap_row_b = [&](int i) {
        swap(b[i], b[i + 1]);
        ops.push_back({2, i + 1});
    };
    auto swap_vertical = [&](int i) {
        swap(a[i], b[i]);
        ops.push_back({3, i + 1});
    };

    /* -------- Phase 1: place 1…n into row a -------- */
    for (int k = 1; k <= n; ++k) {
        /* locate value k */
        int row = -1, pos = -1;               // 0 = a‑row, 1 = b‑row
        for (int j = 0; j < n && row == -1; ++j)
            if (a[j] == k) { row = 0; pos = j; }
        for (int j = 0; j < n && row == -1; ++j)
            if (b[j] == k) { row = 1; pos = j; }

        /* move horizontally to column k‑1 */
        while (pos > k - 1) {                 // shift left
            if (row == 0) swap_row_a(pos - 1);
            else          swap_row_b(pos - 1);
            --pos;
        }
        while (pos < k - 1) {                 // (rare) shift right
            if (row == 0) swap_row_a(pos);
            else          swap_row_b(pos);
            ++pos;
        }

        /* if still in b‑row, drop into a‑row */
        if (row == 1) swap_vertical(pos);
    }

    /* -------- Phase 2: bubble‑sort what’s left in row b -------- */
    for (int pass = 0; pass < n - 1; ++pass)
        for (int i = 0; i < n - 1 - pass; ++i)
            if (b[i] > b[i + 1])
                swap_row_b(i);

    /* -------- output -------- */
    cout << ops.size() << '\n';
    for (auto [t, i] : ops) cout << t << ' ' << i << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) solve_one();
    return 0;
}
