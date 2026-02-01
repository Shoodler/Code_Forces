#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        if(n == 1){
            int k;
            cin>>k;
            if (k == 1){
                cout<<int(2) << " " << int(1);
            } else {
                cout << int(1) << " " << int(2);
            }
        } else {
            vector<vector<int>> g(n, vector<int>(n));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                cin >> g[i][j];
                }
            }
            deque<int> p;

            for (int j = 0; j < n; j++){
                p.push_back(g[0][j]);
            }

            for(int i = 1; i < n; i++){
                p.push_back(g[i][n-1]);
            }

            int tot = n*(2*n + 1), sum = 0;
            for(int i : p){
                sum += i;
            }

            int first = tot - sum;
            p.push_front(first);

            for(int i : p){
                cout << i << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
