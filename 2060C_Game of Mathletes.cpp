//-----Shoodler-----//
//2060_C - Game of Mathletes

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <ll>

void gom() {
    ll ans = 0;
    ll n, k;
    cin >> n >> k;

    //initializing vectors
    vll input_vec(n);
    for (ll &i : input_vec) cin >> i;

    vll pairs(k+1, 0);  //by weight
    for (ll i : input_vec) {
        if (i >= k) continue;
        pairs[i]++;
    }

    //calculating best move score
    for (ll i = 1; i < k; i++) {
        if (i == k-i) {
            ans += pairs[i]/2;
            continue;
        }
        ll m = min(pairs[i], pairs[k-i]);
        pairs[i] -= m;
        pairs[k-i] -= m;
        ans += m;
    }
    cout << ans << endl<<endl;
}


int main () {
    ll t;
    cin>>t;
    while(t--){
        gom();
    }
    return 0;
}


