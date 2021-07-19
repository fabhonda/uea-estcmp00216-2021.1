#include <bits/stdc++.h>
#define pb push_back 
 
using namespace std;
 
int main() {
    
	int b, g, precisa=0;
	cin >> b >> g;
	if(g%2==0){precisa = g/2;}
	else{precisa = floor(g/2);}
	
	precisa -= b;
	
	if(precisa<=0) cout << "Amelia tem todas bolinhas!" << endl;
	else cout << "Faltam " << precisa << " bolinha(s)" << endl;
    return 0;
}
