//----- Shoodler 2025 -----//

#include <bits/stdc++.h>
using namespace std;
using ill = long long;

void solve(){
    ill a, b; cin >> a >> b;
    // compute v2(b)
    int t = 0;
    ill tmp = b;
    while ((tmp & 1) == 0) { tmp >>= 1; ++t; }
        if (t == 0) {
            if (a % 2 == 1) cout << (a * b + 1) << '\n';
            else cout << -1 << '\n';
        } else if (t == 1) {
            if (a % 2 == 1) cout << -1 << '\n';
            else cout << (a * (b/2) + 2) << '\n';
        } else { // t >= 2
            cout << (a * (b/2) + 2) << '\n';
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}

