#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	long long t, n, k, a, b;
	cin >> t;
	
	while(t--){
		cin >> n >> k;
		vector<long long> v1(n), v2(n);
		for(int i=0; i<n;i++){cin >> a; v1[i] = a;}
		for(int i=0; i<n;i++){cin >> b; v2[i] = b;}
		
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		
		long long max=0;
		max = accumulate(v1.begin(),v1.end(),0);
		
		long long i=0, j=n-1;
		while(k>0){
			swap(v1[i],v2[j]);
			long long sum = accumulate(v1.begin(),v1.end(),0);
			if(sum>max) max = sum;
			i++;j--;k--;
		}
		
		cout << max << endl;
		v1.clear(), v2.clear();
	}
	return 0;
}
