//-----Shoodler-----//
//2060B_Farmer John's

#include <bits/stdc++.h>
using namespace std;
int cards[2001][2001];

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        map<int, int> perms;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> cards[i][j];
                perms[cards[i][j]] = i + 1;
            }
        }

        bool a = 1;
        for(int i = 0; i < n * m; i++){
            if(perms[i] != perms[i % n]){
                a = 0;
                break;
            }
        }

        if(!a){
            cout << -1 << endl << endl;
            continue;
        }

        for(int i = 0; i < n; i++){
            cout<< perms [i] << " ";
        }

        cout<<endl<<endl;
    }

    return 0;
}
