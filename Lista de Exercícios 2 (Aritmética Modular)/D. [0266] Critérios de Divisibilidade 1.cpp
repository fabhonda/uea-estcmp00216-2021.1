#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long n1=0,n2=0,n3=0;
	string s;
	cin >> s;
	
	for(int i=0;i<s.size();i++){
		n1 = (((10%2 * n1%2)%2)%2 + ((s[i] - '0')%2))%2;
		n2 = (((10%3 * n2%3)%3)%3 + ((s[i] - '0')%3))%3;
		n3 = (((10%5 * n3%5)%5)%5 + ((s[i] - '0')%5))%5;
	}
	//cout << n1 << " " << n2 << " " << n3 << endl;
	if(n1%2==0) cout << "S" << endl;
	else cout << "N" << endl;
	if(n2%3==0) cout << "S" << endl;
	else cout << "N" << endl;
	if(n3%5==0) cout << "S" << endl;
	else cout << "N" << endl;
	
	
	return 0;
}
