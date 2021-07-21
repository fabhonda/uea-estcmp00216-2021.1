#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

int lo, hi, md, x, y, n, q, c=0;
vector<int> v, v2;

int search_first(int value, int pos){
	for(int i=pos;i>=0;i--){
		if(v[i]!=v[i-1] || i==0) return i+1;
	}
}

void binary_search(){
	for(int i=0;i<v2.size();i++){
		lo = 0, hi = n-1;
	    while (lo <= hi){
	        md = (lo+hi)/2;
	        if (v2[i] == v[md]){
	            cout << v2[i]  << " found at " << search_first(v2[i], md) << endl;
	            break;
	        } else if ( v2[i]  < v[md]){
	            hi = md-1;
	        } else if (v[md] < v2[i] ){
	            lo = md + 1;
	        }
	    }
	    if (v[md]!=v2[i] ){
	        cout << v2[i]  << " not found" << endl;
	    }		
	}
}


int main(){
	cin >> n >> q;
	while(n!=0 && q!=0){
		c++;
		for(int i=0;i<n;i++){cin >> y; v.pb(y);}
		sort(v.begin(),v.end());
		for(int i=0; i<q;i++){cin >> x; v2.pb(x);}
		cout << "CASE# " << c << ":" << endl;
		binary_search();
		v.clear(),v2.clear();
		cin >> n >> q;
	}
	
    return 0;
}
