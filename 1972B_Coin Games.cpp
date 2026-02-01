#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; n=0;
        string s; cin>>s;
        for(char c : s){
            if(c == 'U')
                n++;
        }
            if(n==0){
                cout<<"NO\n";
                continue;
            }
            else if (n%2 != 0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
    }
    return 0;
}
