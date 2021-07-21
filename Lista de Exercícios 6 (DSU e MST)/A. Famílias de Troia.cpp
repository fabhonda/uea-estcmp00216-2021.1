#include<bits/stdc++.h>
#define N 1000123
using namespace std;

int parent[N];
int n, m, u, v, ans=0;

void initialize(int n){
	for(int i=1;i<=n;i++){
		parent[i] = i;
	}
}

int id(int u){
	if(u!= parent[u]){
		return parent[u] = id(parent[u]);
	}
	return u;
}

void join(int u, int v){
	u = id(u);
	v = id(v);
	if(u==v) return;
	parent[v] = u;
}

int main(){
	
	cin >> n >> m;
	initialize(n);
	
	while(m--){
		cin >> u >> v;
		join(u,v);
	}
	
	for(int i=1;i<=n;i++){
		if(i==id(i)) ans++;
	}
	
	cout << ans << endl;
	return 0;
}
