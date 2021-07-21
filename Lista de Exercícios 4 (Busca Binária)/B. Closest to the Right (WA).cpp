#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

long long lo, hi, md, x, y, n, q;
vector<long long> v, v2;


void binary_search(){
	for(int i=0;i<v2.size();i++){
		lo = 0, hi = n-1;
	    while (lo <= hi){
	        md = (lo+hi)/2;
	        if (v2[i] == v[md]){
	            cout << md+1 << endl;
	            break;
	        } else if ( v2[i]  < v[md]){
	            hi = md-1;
	        } else if (v[md] < v2[i]){
	            lo = md + 1;
	        }
	    }
	    if (v[md]!=v2[i]){
	    	if(v2[i] <= v[lo]) cout << lo+1 << endl;
	    	else if(v2[i] == v[hi]) cout << hi+1 << endl;
	        else cout << n+1 << endl;
	    }		
	}
}


int main(){
	cin >> n >> q;
	for(int i=0;i<n;i++){cin >> y; v.pb(y);}
	for(int i=0; i<q;i++){cin >> x; v2.pb(x);}
	binary_search();
    return 0;
}
