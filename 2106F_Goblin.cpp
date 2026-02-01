#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    s = " " + s;
    vector<long long> top(n+1, 0), bot(n+1, 0);
    long long ans = 0;
    for (long long i = 1; i <= n; i++) {
        if (s[i] == '1') {
            top[i] = bot[i-1] + 1;
        }
        else {
            top[i] = top[i-1] + (i - 1);
            bot[i] = bot[i-1] + (n - i);
        }
        ans = max(ans, max(top[i], bot[i]));
    }
    cout << ans << "\n";
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }
    return 0;
}
