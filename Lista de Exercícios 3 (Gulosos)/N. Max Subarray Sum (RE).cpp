#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long memo[1000][1000];

int acumuladores(long long n, long long i, long long j){
	if(j==0){
		return memo[i][0];
	}
	if(memo[i][j] != -1) return memo[i][j];
	return memo[i][j] = acumuladores(n,i,j-1)+n;
}

int main(){_

	long long x, n;
	cin >> n;
	vector<long long> v(n);
	
	for(int i=0;i<n;i++){
		cin >> x;
		v[i] = x;
	}
	
	memset(memo,-1,sizeof(memo));
	
	bool troca=true;
	long long i=0, j=1, sum=0, max=accumulate(v.begin(),v.end(),0);
	if(max==n) cout << n << endl;
	else if(v.size()==1 || max==(n*-1)) cout << v[i] << endl;
	else{
		for(int k=0;k<v.size();k++){
			if(v[k]>max) max=v[k];
		}
		while(i<v.size()-1){
			if(troca){memo[i][j-i-1] = accumulate(v.begin()+i,v.begin()+j+1,0);sum=memo[i][j-i-1];troca=false;}
			else sum = acumuladores(v[j],i,j-i-1);
			j++;
			if(j==v.size()){
				i++;
				j= i+1;
				troca=true;
			}
			if(sum>max) max = sum;
		}
		cout << max << endl;		
	}
	return 0;
	
}


	

