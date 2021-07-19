#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n, x, p;
	cin >> n >> x;
	vector<long long> v(n);
	
	for(int i=0;i<n;i++){
		cin >> p;
		v[i] = p;
	}
	
	sort(v.begin(),v.end());
	
	long long i=0, j=v.size()-1, cont=0;
	while(i<=j){
		if(i==j){cont++;break;}
		if(v[i]+v[j] > x){cont++;j--;}
		else if(v[i]+v[j] <= x){cont++;i++;j--;}
	}
	
	cout << cont << endl;
	
	
	return 0;
}
