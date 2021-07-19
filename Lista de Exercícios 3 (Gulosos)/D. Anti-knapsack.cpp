#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	long long t, n, k;
	cin >> t;
	
	while(t--){
		cin >> n >> k;
		vector<long long> v(n), m;
		for(int i=0;i<n;i++) v[i] = i+1;
		for(int i=0;i<v.size();i++){
			if(v[i]>k)m.pb(v[i]);
			else if(k-v[i] <= v[i] && v[i]!=k) m.pb(v[i]); 
		}
		cout << m.size() << endl;
		for(int i=0;i<m.size();i++) cout << m[i] << " ";
		cout << endl;
		v.clear(), m.clear();
	}
	
	
	return 0;
}
