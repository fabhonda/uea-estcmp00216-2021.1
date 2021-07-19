#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string renas[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
	long long a, sum=0;
	for(int i=0;i<9;i++){
		cin >> a;
		sum = ((sum%9)+(a%9))%9;
	}
	if(sum!=0) cout << renas[sum-1] << endl;
	else cout << renas[8] << endl;
	
	return 0;
}
