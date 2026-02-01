#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;

    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; ++i) cin >> queries[i].first >> queries[i].second;

    vector<long long> final_ans(n + 1, 0);

    for (int k = 0; k < 19; ++k) {
        long long bit_val = (1LL << k);
        if (bit_val > n) break;

        long long M = (1LL << (k + 1));
        int size_needed = n + M + 2;
        vector<long long> cnt(size_needed, 0), sub(size_needed, 0);

        bool active_bit = false;

        for (auto& query : queries) {
            int l = query.first, r = query.second;
            long long start = l - 1 + bit_val;
            if (start > r) continue;

            active_bit = true;
            long long steps = (r - start) / M;
            long long end = start + steps * M;

            cnt[start]++;
            sub[start] += (l - 1);
            if (end + M < size_needed) {
                cnt[end + M]--;
                sub[end + M] -= (l - 1);
            }
        }

        if (!active_bit) continue;

        for (int i = 1; i <= n; ++i) {
            if (i > M) {
                cnt[i] += cnt[i - M];
                sub[i] += sub[i - M];
            }
            if (cnt[i] > 0) final_ans[i] += (cnt[i] * i - sub[i]) * bit_val;
        }
    }

    for (int i = 1; i <= n; ++i) cout << final_ans[i] << (i == n ? "" : " ");
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) while (t--) solve();
    return 0;
}
