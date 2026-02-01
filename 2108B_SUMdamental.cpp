#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPowerOfTwo(int y) {
    return y > 0 && (y & (y - 1)) == 0;
}

void solve(){
    long long n, x; cin>>n>>x;
    long long sum = 0;

    if (n == 1) {
        cout << (x == 0 ? -1 : x) << endl;
        return;
    }

    if (n == 2) {
        if (x == 0) {
            cout << 2 << endl;
        } else {
            int a = 1;
            int b = a ^ x;
            if (b > 0) {
                cout << a + b << endl;
            } else {
                a = 2;
                b = a ^ x;
                cout << a + b << endl;
            }
        }
        return;
    }

    // For n >= 3
    int num_ones = n - 2;
    int pre_xor = num_ones % 2;
    int y = x ^ pre_xor;

    if (y == 0) {
        cout << (num_ones + 2) << endl;
    } else {
        if (isPowerOfTwo(y)) {
            cout << (num_ones + y + 1) << endl;
        } else {
            cout << (num_ones + y) << endl;
        }
    }
}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

