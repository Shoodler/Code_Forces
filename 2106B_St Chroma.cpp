#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int i, j;
    int n, x; cin >> n >> x;
    //x = 4
    //0,1,2,3,5,6,7,4
    vector<int> p(n);

    if(x == 0){
        for(i = 1; i<n; i++){
            p[i-1] = i;
        }
        p[n-1] = 0;
    }
    else if(x == n){
        for(i = 0; i<n; i++){
            p[i] = i;
        }
    }
    else{
        i = 0;
        for(; i < x; i++){
            p[i] = i;
        }
        for(j = x+1; j < n; j++, i++){
            p[i] = j;
        }
        p[i] = x;
    }

    for(i = 0; i < n; i++){
        cout << p[i] << (i+1 == n? '\n' : ' ');
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
