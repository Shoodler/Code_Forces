#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k, x;
        cin >> k >> x;
        long long n = x * (1LL << k);
        cout << n << "\n";
    }
    return 0;
}
