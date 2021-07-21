#include <bits/stdc++.h>
#define pb push_back 
 
using namespace std;
 
int main() {
    
    int a, soma=0;
    vector<string> renas;
    renas.pb("Dasher"), renas.pb("Dancer"), renas.pb("Prancer"), renas.pb("Vixen"), renas.pb("Comet"), renas.pb("Cupid"), renas.pb("Donner"), renas.pb("Blitzen"), renas.pb("Rudolph");
    for(int i=0;i<9;i++){
    	cin >> a;
    	soma += a;
	}
	while(soma > 9){
		soma -= 9;
	}
	cout << renas[soma-1] << endl;	
    return 0;
}
