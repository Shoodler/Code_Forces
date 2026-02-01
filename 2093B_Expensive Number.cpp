#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        string x; cin>>x;
        int n = x.size();
        int i;
        for(i=n-1; i>=0; i--){
            if(x[i] != '0')
                break;
        }
        int c = 0;
        for(int j = 0; j<i; j++){
            if(x[j]!= '0')
                c++;
        }
        int ans = c+ n-i-1;
        cout<<ans<<endl;
    }
}
