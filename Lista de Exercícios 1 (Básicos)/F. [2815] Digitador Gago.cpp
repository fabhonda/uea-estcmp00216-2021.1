#include <bits/stdc++.h>
#define pb push_back 
 
using namespace std;
 
int main() {
    
    string texto;
    getline(cin, texto);
    for(int i=0; i<texto.size();i++){
    	if(texto[i] == texto[i+2] && texto[i+1] == texto[i+3]){texto[i] = '0'; texto[i+1]='0';}
	}
   	for(int j=0; j<texto.size();j++){
   		if(texto[j] != '0') cout << texto[j];
   	}
   	cout << endl;    
    return 0;
}
