#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    int M = 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            M = max(M, a[i][j]);
        }

    //check whether all M lie on the same cross of row i and column j
    vector<int> rowCnt(n, 0), colCnt(m, 0);
    int totMax = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (a[i][j] == M) {
                ++rowCnt[i];
                ++colCnt[j];
                ++totMax;
            }

    bool Cross = false;
    for (int i = 0; i < n && !Cross; ++i)
        for (int j = 0; j < m; ++j) {
            int covered = rowCnt[i] + colCnt[j] - (a[i][j] == M);
            if (covered == totMax) {      // all Ms lie in row i or col j
                Cross = true;
                break;
            }
        }

    cout << (Cross ? M - 1 : M) << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
