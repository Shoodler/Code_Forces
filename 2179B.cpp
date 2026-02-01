//===== Shoodler =====

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for(int i  = 0; i < n; i++){
            cin>>a[i];
        }

        long long total = 0, best = 0;

        for (int i = 0; i + 1 < n; i++)
            total += abs(a[i] - a[i + 1]);

        // first and last
        best = max(abs(a[0] - a[1]), abs(a[n - 2] - a[n - 1]));

        // middle
        for (int i = 1; i + 1 < n; i++)
            best = max(best,
                (long long)abs(a[i - 1] - a[i]) +
                abs(a[i] - a[i + 1]) -
                abs(a[i - 1] - a[i + 1])
            );

        cout << total - best << '\n';
    }
}

//===== Thanks =====
