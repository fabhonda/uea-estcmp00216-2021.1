#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<long long> v(14);
	long long n=0, t, sum=0, cont=0;
	
	for(int i=0;i<v.size();i++){
		v[i] = pow(2,n); n++;
	}
	
	cin >> t;
	
	for(int i=v.size()-1;i>=0;i--){
		if(t>v[i]){
			sum+=v[i];
			if(sum>t){
				sum-=v[i];
			}
			else{
				i++;cont++;
			}
		}
		else if(t==v[i]){cont=1; break;}
	}
	
	cout << cont << endl;
	
	
	return 0;
}
