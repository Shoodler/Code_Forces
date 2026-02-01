#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i<= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;

        if(k > 1 && x > 1)
            cout<<"No\n";
        else if(k == 1)
            cout<<(isPrime(x) ? "YES" : "NO")<<endl;
        else{
            cout<<((k == 2) ? "YES" : "NO")<<endl;
        }
    }
    return 0;
}
