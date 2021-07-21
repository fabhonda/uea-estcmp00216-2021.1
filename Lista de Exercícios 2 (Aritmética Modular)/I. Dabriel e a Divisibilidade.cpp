#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	long long dec,n,m,num;
	vector<long long> div;
	string bin;
	
	cin >> bin;
	cin >> m;
	
	while(m--){
		cin >> num;
		dec=0,n=1;
		for(int i=bin.size()-1;i>=0;i--){
			long long pot = (((bin[i]-'0')%num) * n%num)%num;
			dec = (dec%num + pot%num)%num;
			n = ((n%num)*(2%num))%num;
		}	
		if(dec%num==0) div.pb(num);
	}
	
	
	if(div.size()==0) cout << "Nenhum" << endl;
	else{
		sort(div.begin(),div.end());
		for(int i=0;i<div.size();i++){
			if(i!=div.size()-1) cout << div[i] << " ";
			else cout << div[i] << endl;
		}		
	}
	
	return 0;
}


