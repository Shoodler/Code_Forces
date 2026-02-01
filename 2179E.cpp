#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

void solve() {
    long long n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    vector<long long> p(n);

    long long x_min_req = 0, y_min_req = 0, sum_p = 0;
    int count0 = 0, count1 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        sum_p += p[i];
        long long win_min = (p[i] / 2) + 1;
        if (s[i] == '0') {
            x_min_req += win_min;
            count0++;
        } else {
            y_min_req += win_min;
            count1++;
        }
    }

    if (x < x_min_req || y < y_min_req || (x + y) < sum_p) {
        cout << "NO" << endl;
        return;
    }

    if (count1 == 0) {
        if (x < y + n) {
            cout << "NO" << endl;
            return;
        }
    }

    if (count0 == 0) {
        if (y < x + n) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
