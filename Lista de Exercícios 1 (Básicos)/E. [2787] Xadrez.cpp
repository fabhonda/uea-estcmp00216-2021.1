#include <bits/stdc++.h>
#define pb push_back 
 
using namespace std;
 
int main() {
    int l, c;
    cin >> l >> c;
    if(l%2 == 0 && c%2 != 0) cout << 0 << endl;
    if(l%2 == 0 && c%2 == 0) cout << 1 << endl;
    if(l%2 != 0 && c%2 == 0) cout << 0 << endl;
    if(l%2 != 0 && c%2 != 0) cout << 1 << endl;	
    return 0;
}
