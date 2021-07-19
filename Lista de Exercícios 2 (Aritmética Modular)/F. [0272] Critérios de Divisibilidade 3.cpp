#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long n=0;
	string s;
	cin >> s;
	
	for(int i=0;i<s.size();i++){
		n = (((10%11 * n%11)%11)%11 + ((s[i] - '0')%11))%11;
	}
	//cout << n1 << " " << n2 << " " << n3 << endl;
	if(n%11==0) cout << "S" << endl;
	else cout << "N" << endl;
	
	return 0;
}
