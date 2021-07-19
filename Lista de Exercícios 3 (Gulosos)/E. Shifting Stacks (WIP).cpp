#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long t, n, h, total;
	cin >> t;
	
	while(t--){
		cin >> n;
		vector<long long> heights(n);
		for(int i=0;i<n;i++){
			cin >> h;
			heights[i] = h;
		}
		
		for(int i=0;i<heights.size();i++){
			if(heights[i] >= heights[i+1] && heights[i]!=0){
				heights[i+1]++;
				heights[i]--;
			}
		}
		
		long long j=1, i=0, cont=0;
		while(j<heights.size()){
			if(heights[i] < heights[j]){i++;j++;}
			else if(heights[i] == heights[j]){cont++;i++;j++;} 
		}
		
		if(cont+1 == heights.size()) cout << "NO" << endl;
		else cout << "YES" << endl;
		heights.clear();
	}
	
	
	return 0;
}
