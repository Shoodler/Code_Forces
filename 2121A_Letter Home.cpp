#include <bits/stdc++.h>
using namespace std;

long long solve_case() {
    int n, s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int mn = arr.front();
    int mx = arr.back();

    //calculate the minimum distance from s to either end of array x(i)
    long long interval = mx - mn;
    long long extra    = min(abs(s - mn), abs(s - mx));
    return interval + extra;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cout << solve_case() << '\n';
    }
    return 0;
}

