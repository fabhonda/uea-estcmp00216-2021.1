#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int j,r,pv,k=0;
	
	cin >> j >> r;
	long long play[j];
	memset(play,0,sizeof(play));
	
	for(int i=0;i<j*r;i++){
		cin >> pv;
		play[k] = play[k] + pv;
		k++;
		if(k==j) k=0;	
	}
	
	int max=0,index=0;
	for(int i=0;i<j;i++){
		if(play[i]>=max){max=play[i];index=i+1;}
	}
	cout << index << endl;

	return 0;
}
