#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, num;
    vector<int> pares, impares;
    cin >> n;
    while(n--){
    	cin >> num;
    	if(num%2==0) pares.push_back(num);
    	else impares.push_back(num);
	}
	sort(pares.begin(),pares.end());
	sort(impares.begin(),impares.end());
	for(int i=0;i<pares.size();i++) cout << pares[i] << endl;
	for(int j=impares.size()-1;j>=0;j--) cout << impares[j] << endl;
    return 0;
}
