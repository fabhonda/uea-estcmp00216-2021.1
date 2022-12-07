#include<bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000000
#define ll long long
using namespace std;

ll n, dp[MAX], saltos[MAX];

int dice_combination(ll n){
	if(n<0) return 0;
	if(n==0) return 1;
	if(dp[n]!=-1) return dp[n]%MOD;
	dp[n] = 0;
	for(ll s : saltos) dp[n] = ((dp[n])%MOD+(dice_combination(n-s))%MOD)%MOD;
	return dp[n]%MOD;
}

int main(){
	memset(dp,-1,sizeof(dp));
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> saltos[i];
	}
	cout << dice_combination(n)%MOD << endl;
	
	return 0;
}


