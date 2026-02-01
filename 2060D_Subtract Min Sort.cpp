//-----Shoodler-----//
//2060D_Subtract Min Sort

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        bool p = 1;
        ll n; cin>>n;
        deque<ll> a(n);
        for(ll&i : a) cin>>i;

        while((ll)a.size()>1){//testing
            if(a[0]>a[1]){
                p = 0;
                break;
            }else if(a[0]<a[1]){
                a[1]-=a[0];
                a.pop_front();
            }else{
                a.pop_front();
                a.pop_front();
            }
        }
        cout << (p ? "Yes" : "No") << endl << endl;
    }

    return 0;
}
