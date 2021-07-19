#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	
	long long n,a,p, cont=0, gp=0;
	cin >> n;
	vector<pair<long long, long long> > meat;
	
	for(int i=0;i<n;i++){
		cin >> a >> p;
		meat.pb(mp(a,p));
	}
	
	long long i=0, j=1, min=0;
	while(i<meat.size()){
	   if(i==meat.size()-1){cont+= (meat[i].first*meat[i].second);i++;}
	   else if(meat[i].second < meat[j].second){
	      min = meat[i].second;
	      cont+= meat[i].first * min;
	      do{
	         cont+= meat[j].first*min;
	         j++;
	         if(j==meat.size()) break;
	      }while(min < meat[j].second);
			i=j; j++;
	   }
	   else{
	    	cont+= meat[i].first * meat[i].second;
			i++; j++;
	  	}
	}
	
	cout << cont << endl;
	return 0;
}
