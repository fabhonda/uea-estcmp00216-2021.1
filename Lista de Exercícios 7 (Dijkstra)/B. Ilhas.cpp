#include<bits/stdc++.h>
#define N 1000024
#define M 2000024
#define INF 3000000000000020
#define mp make_pair
#define pb push_back

using namespace std;

long long n, m, u, v, w, s, dist[N], processed[M];
vector<pair<long long, long long> > adj[N];

int dijkstra(long long x) {
    for (long long i = 1; i <= n; i++) {
        dist[i] = INF;
        processed[i] = 0;
    }
    dist[x] = 0;

    priority_queue<pair<long long, long long> > pq;
    pq.push(mp(0,x));

    while(pq.size()) {
        long long u = pq.top().second;
        pq.pop();
        
        if (processed[u]) continue;
    
        processed[u] = 1;
        for (long long i=0; i<adj[u].size();i++) {
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
    
    cin >> s;
    dijkstra(s);
    
    long long max=-1e9, min=1e9;
	for(int i=1;i<=n;i++){
		if(dist[i]>max) max = dist[i];
		if(dist[i]<min && dist[i]) min = dist[i];
	}
	
	cout << max-min << endl;
    return 0;
}
