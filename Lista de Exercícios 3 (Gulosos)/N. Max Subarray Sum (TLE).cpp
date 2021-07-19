#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
	
	long long x, n;
	cin >> n;
	vector<long long> v(n);
	
	for(int i=0;i<n;i++){
		cin >> x;
		v[i] = x%MOD;
	}
	
	long long i=0, j=0, cont=1, max=accumulate(v.begin(),v.end(),0);
	if(v.size()==1) cout << v[i] << endl;
	else{
		while(cont<v.size()){
			if(cont==1){
				if(v[i]>max) max=v[i];
				i++;
				if(i==v.size()){i=0;j++;cont++;}
			}
			else if(cont>1){
				long long sum = accumulate(v.begin()+i,v.begin()+j,0);
				if(sum > max) max=sum;
				i++;
				j=i+cont-1;
				if(j==v.size()){i=0;j=cont;cont++;}
			}
		}
			cout << max << endl;
	}
	return 0;
		
}
	
