#include<bits/stdc++.h>
#define pb push_back
#define N 200123

using namespace std;

int parent[N], set_size[N];

void initialize(int n) {
    for (int i=0; i < n; ++i) {
        parent[i] = i;
        set_size[i] = 1;
    }
}

int id(int u) {
    if (u != parent[u]) return parent[u] = id(parent[u]);
    return u;
}

void join(int u, int v) {
    u = id(u);
    v = id(v);
    if (u == v) return;

    if (set_size[u] < set_size[v]) swap(u, v);
    parent[v] = u;
    set_size[u] += set_size[v];
}

struct Edge {
    int u, v, w;
    bool operator<(Edge const& other) {
        return w < other.w;
    }
};

int n, u, v, w, m;
vector<Edge> edges;
int mst, total;
vector<Edge> result;

int main() {

    while((cin >> n >> m) && (m || n)) {

        initialize(n);

        while(m--) {
            cin >> u >> v >> w;
            total += w;
            edges.pb({u, v, w});
        }

        sort(edges.begin(), edges.end());
        for (Edge e : edges) {
            if (id(e.u) != id(e.v)) {
                mst += e.w;
                join(e.u, e.v);
            }
        }

        cout << total - mst << endl;
        total = 0; mst = 0;
        edges.clear();
    }

    return 0;
}
