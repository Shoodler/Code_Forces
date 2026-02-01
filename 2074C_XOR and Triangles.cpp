#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int x;
    cin >> x;
    int y=0;

    for(int i=0;i<32;i++){
    	if((x&(1<<i))){
    		y=(y^(1<<i));
    		break;
    	}
    }
    for(int i=0;i<32;i++){
    	if((x&(1<<i))==0){
    		y=(y^(1<<i));
    		break;
    	}
    }
    if(y>=x){
    	cout<<-1<<endl;
    }
    else{
    	cout<<y<<endl;
    }
}

signed main(){
    int x;
    cin>>x;
    while(x--){
        solve();
    }
    return 0;
}


