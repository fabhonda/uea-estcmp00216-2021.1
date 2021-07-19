#include<bits/stdc++.h>
using namespace std;
 
int main(){
	
	long long n, x, i=0, j=0, cont=0;
	cin >> n; vector<long long> v(n), r(n);
	for(int i=0;i<n;i++){cin>>x;v[i]=x;r[i]=x;}
	reverse(r.begin(),r.end());
	
	if(is_sorted(v.begin(),v.end())) cout << 1 << endl;
	else if(is_sorted(r.begin(),r.end())) cout << r[r.size()-1] << endl;
	else{
		while(j<v.size()){
				if(v[i]==j+1 && v[i]!=-1){j++;v[i]=-1;}
				i++;
				if(i==v.size()){i=0;cont++;}
			}
			cout << cont << endl;
	}
	return 0;
}
