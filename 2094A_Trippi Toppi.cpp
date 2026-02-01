#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string a, b = "";
        getline(cin, a);
        b += a[0];

        for(int i = 1; i<a.length(); i++){
            if (a[i - 1] == ' ' && a[i] != ' '){
                b += a[i];
            }
        }

        cout << b << endl;
    }
    return 0;
}

