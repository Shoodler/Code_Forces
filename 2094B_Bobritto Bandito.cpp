#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        int a = max(l, -m);
        int b = a + m;

        if (b > r) {
            b = r;
            a = r - m;
        }
        cout<< a << " " << b <<endl;
    }
    return 0;
}
