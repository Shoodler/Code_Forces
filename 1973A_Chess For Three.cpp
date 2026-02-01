#include <bits/stdc++.h>
using namespace std;

int main(){
        int t; cin>>t;
        while(t--){
            int p1, p2, p3, n; cin >> p1 >> p2 >> p3;
            n = p1+p2+p3;

            if(n & 1){
                cout << -1 <<endl;
            }

            else{
                if(p1 + p2 >= p3){
                    cout << n/2 << endl;
                }
                else{
                    cout << n-p3 << endl;
                }
            }
        }
}
