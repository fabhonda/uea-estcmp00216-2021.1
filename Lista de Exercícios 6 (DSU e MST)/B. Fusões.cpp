#include<bits/stdc++.h>
#define N 1000123
using namespace std;

int parent[N];
int n, k, u, v;
char op;

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

void print_parents(int n){
	for(int i=1;i<=n;i++){
		cout << i << ": " << "id(" << i <<"): " << id(i) << endl;
	}
	cout << endl;
}

int main(){
	
	cin >> n >> k;
	initialize(n);
	
	while(k--){
		cin >> op >> u >> v;
		if(op=='C'){
			if(id(u) == id(v)) cout << "S" << endl;
			else cout << "N" << endl;
		}
		else{
			join(u,v);
		}	
	}
	
	return 0;
}
