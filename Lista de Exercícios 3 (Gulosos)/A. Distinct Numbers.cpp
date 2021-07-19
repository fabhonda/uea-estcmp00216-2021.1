#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n, x;
	cin >> n;
	vector<long long> v(n);
	
	for(int i=0;i<n;i++){
		cin >> x;
		v[i] = x;
	}
	
	sort(v.begin(),v.end());
	
	long long a=0, cont=0;
	for(int i=0;i<v.size();i++){
		if(v[i]!=a){cont++;a=v[i];}
	}
	
	cout << cont << endl;
	
	
	return 0;
}
