#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long n1=0,n2=0,n3=0;
	string s;
	cin >> s;
	
	for(int i=0;i<s.size();i++){
		n1 = (((10%4 * n1%4)%4)%4 + ((s[i] - '0')%4))%4;
		n2 = (((10%9 * n2%9)%9)%9 + ((s[i] - '0')%9))%9;
		n3 = (((10%25 * n3%25)%25)%25 + ((s[i] - '0')%25))%25;
	}
	//cout << n1 << " " << n2 << " " << n3 << endl;
	if(n1%4==0) cout << "S" << endl;
	else cout << "N" << endl;
	if(n2%9==0) cout << "S" << endl;
	else cout << "N" << endl;
	if(n3%25==0) cout << "S" << endl;
	else cout << "N" << endl;
	
	
	return 0;
}
