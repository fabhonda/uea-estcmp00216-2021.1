#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int n, m, u, v;
vector<int> adj[100005];
bool visited[100005];

void dfs(int u) {
    visited[u] = true;
    for (auto v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    cin >> n >> m;

    while (m--) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int ans = 0;
    for (int u = 1; u <= n; u++) {
        if (!visited[u]) {
            dfs(u);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
