#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

long long lo, hi, md, x, y, n, q;
vector<long long> v;


void binary_search(){
	lo = 0, hi = n-1;
	while (lo <= hi){
	    md = (lo+hi)/2;
	    if(hi-lo==1){
	    	long long aux = v[lo]+v[hi];
	    	if(aux == x) cout << v[md] << " " << v[md+1] << endl;
	    	else if(aux > x) cout << v[md-1] << " " << v[md] << endl;
	    	else if(aux < x) cout << v[md] << " " << v[md+1] << endl;
	    	break;
		} else if ( x  < x-v[md]){
	        hi = md;
	    } else if (x-v[md] < x){
	        lo = md;
	    }
	}		
}


int main(){
	cin >> n;
	for(int i=0;i<n;i++){cin >> y; v.pb(y);}
	cin >> x;
	binary_search();
    return 0;
}
