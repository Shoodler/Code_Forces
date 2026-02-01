#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long floor = n/2;            // floor(n/2)
    long long ans = floor*(n-floor) + 1;
    cout << ans << "\n";
}

int main(){
    long long t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
