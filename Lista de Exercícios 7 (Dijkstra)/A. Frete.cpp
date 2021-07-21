#include<bits/stdc++.h>
#define N 102
#define INF 1e9
#define mp make_pair
#define pb push_back

using namespace std;

int n, m, u, v, w, dist[N], processed[N];
vector<pair<int, int> > adj[N];

int dijkstra() {
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        processed[i] = 0;
    }
    dist[1] = 0;

    priority_queue<pair<int, int> > pq;
    pq.push(mp(0,1));

    while(pq.size()) {
        int u = pq.top().second;
        pq.pop();
        
        if (processed[u]) continue;
    
        processed[u] = 1;
        for (int i=0; i<adj[u].size();i++) {
        	v = adj[u][i].first; w = adj[u][i].second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push(mp(-dist[v], v));
            }
        }
    }

    return dist[n];
}

int main() {
    cin >> n >> m;
    while (m--) {
        cin >> u >> v >> w;
        adj[u].pb(mp(v,w));
        adj[v].pb(mp(u,w));
    }

    cout << dijkstra() << endl;

    return 0;
}
