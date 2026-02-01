#include <bits/stdc++.h>   // iostream + algorithm + everything you need
using namespace std;

/*-------------------------------------------------------------
   Compute the last two terms of the modified Fibonacci series
   F(1) = 1, F(2) = 2, F(k) = F(k-1)+F(k-2)

   On exit: fn  = F(n)     (current term)
            fn1 = F(n-1)   (previous term)
-------------------------------------------------------------*/
void fib_last_two(long long& fn, long long& fn1, int n) {
    if (n == 1) { fn  = 1; fn1 = 0; return; }
    if (n == 2) { fn  = 2; fn1 = 1; return; }

    long long prev2 = 1;   // F1
    long long prev1 = 2;   // F2
    for (int k = 3; k <= n; ++k) {
        long long nxt = prev1 + prev2;
        prev2 = prev1;
        prev1 = nxt;
    }
    fn  = prev1;   // F(n)
    fn1 = prev2;   // F(n-1)
}

void solve() {
    int cubes, boxes;
    cin >> cubes >> boxes;

    long long fn, fn1;                    // F(n) and F(n-1)
    fib_last_two(fn, fn1, cubes);

    string ans(boxes, '0');               // fill with '0', overwrite with '1' if OK
    for (int i = 0; i < boxes; ++i) {
        long long w, l, h;  cin >> w >> l >> h;
        long long mn = min({w, l, h});
        long long mx = max({w, l, h});

        if (mn >= fn && mx >= fn + fn1)  // both conditions satisfied
            ans[i] = '1';
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;
    while (t--) solve();
    return 0;
}
