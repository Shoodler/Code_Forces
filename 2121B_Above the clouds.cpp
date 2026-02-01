//-----Shoodler-----//
//Per Audacia, Ad Astra
//17-06-2025//

#include <bits/stdc++.h>
using namespace std;

bool solve_one() {
    int n;
    string s;
    cin >> n >> s;

    int freq[26] = {0};
    for (char ch : s) freq[ch - 'a']++;

    for (int i = 1; i < n - 1; ++i)
        if (freq[s[i] - 'a'] >= 2)
            return true;

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
        cout << (solve_one() ? "YES\n" : "NO\n");
}
