#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;

int main(){
	
	ll n,x,a; cin>>n>>x;
	vector<ll> v1(n), v2(n); 
	
	for(int i=0;i<n;i++){
		cin >> a;
		v1[i] = a, v2[i]=a;
	}
	
	sort(v1.begin(),v1.end());
	
	ll j = v1.size()-1, i=0;
	pair<ll, ll> number, index;
	number = mp(-1,-1), index = mp(-1,-1);
	
	while(i<j){
		if(i==j) break;
		if(v1[i] + v1[j] > x) j--;
		else if(v1[i] + v1[j] < x) i++;  
		else if(v1[i] + v1[j] == x){number.first=v1[i], number.second=v1[j]; break;}
	}	
	
	if(number.first==-1 && number.second==-1){
		cout << "IMPOSSIBLE" << endl;
	}
	else{
		for(int i=0;i<v2.size();i++){
			if(number.first==v2[i] && index.first==-1) index.first = i;
			if(number.second==v2[i] && i!=index.first) index.second=i;
		}
		
		cout << index.first+1 << " " << index.second+1 << endl;		
	}

	return 0;
}
