#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, c = 0, d = 0; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i ++){
        if(s[i] == '1'){
            c++;
        }else{
            d++;
        }
    }
    cout<<(d+c*(n-1))<<endl;
    //100
    //000
    //110
    //101
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
