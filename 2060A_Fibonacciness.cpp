//-----Shoodler-----//
//2060A_Fibonacciness

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        set<int> a;
        a.insert(a1 + a2);
        a.insert(a4 - a2);
        a.insert(a5 - a4);
        cout << 4 - a.size() << endl << endl;
    }

    return 0;
}
