//===== Shoodler =====
#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

void run_agent() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; ++i) {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // BFS to find distances from vertex 1
        vector<int> dist(n + 1, -1);
        queue<int> q;
        dist[1] = 0;
        q.push(1);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    q.push(v);
                }
            }
        }

        string s = "";
        string colors = "rgb";
        for (int i = 1; i <= n; ++i) {
            s += colors[dist[i] % 3];
        }
        cout << s << endl;
    }
}

void run_blackslex() {
    int t; cin >> t;
    while (t--) {
        int q_count; cin >> q_count;
        while (q_count--) {
            int d_v; cin >> d_v;
            string c; cin >> c;

            bool has_r = false, has_g = false, has_b = false;
            for (char ch : c) {
                if (ch == 'r') has_r = true;
                if (ch == 'g') has_g = true;
                if (ch == 'b') has_b = true;
            }

            char target;
            // Apply the cycle logic
            if (has_r && has_g) target = 'g';
            else if (has_g && has_b) target = 'b';
            else if (has_b && has_r) target = 'r';
            else if (has_r) target = 'r';
            else if (has_g) target = 'g';
            else target = 'b';

            // Find the 1-based index of any neighbor with the target color
            for (int j = 0; j < d_v; ++j) {
                if (c[j] == target) {
                    cout << j + 1 << endl;
                    break;
                }
            }
        }
    }
}

int main() {
    string mode; cin >> mode;
    if (mode == "first") run_agent();
    else run_blackslex();
    return 0;
}
