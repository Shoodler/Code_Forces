#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int x; cin>> x;
        int t = __lg(x + 1);
        if ((1 << t) < x + 1) t++;
        int ans = 2 * t + 1;
        cout<< ans<<'\n';
    }
    return 0;
}
