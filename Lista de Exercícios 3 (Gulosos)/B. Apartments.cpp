#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	
	long long n,m,k,a,b;
	cin >> n >> m >> k;
	vector<long long> d_size, a_size;
	
	while(n--){
		cin >> a;
		d_size.pb(a);
	}
	
	while(m--){
		cin >> b;
		a_size.pb(b);
	}
	
	sort(d_size.begin(),d_size.end());
	sort(a_size.begin(),a_size.end());
	
	long long i=0, j=0, max=0,min=0, cont=0;
	while(i<d_size.size() && j<a_size.size()){
		max = d_size[i]+k;
		min = d_size[i]-k;
		if(a_size[j] >= min && a_size[j] <= max){cont++;j++;i++;}
		else{
			if(d_size[i] > a_size[j]) j++;
			else if(d_size[i] < a_size[j]) i++;	
		}
	}
	cout << cont << endl;
	
	return 0;
}
