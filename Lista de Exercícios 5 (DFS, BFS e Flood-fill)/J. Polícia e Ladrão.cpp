#include<bits/stdc++.h>
using namespace std;

int n,m;
int grid[5][5];
bool visited[5][5];
bool conseguiu;

void floodfill(int i, int j){
	if(i==4 && j==4) conseguiu=true;
	if(i<0 || i>=5 || j<0 || j>=5) return;
	if(grid[i][j]==1 || visited[i][j]) return;
	visited[i][j] = true;
	
	floodfill(i,j+1); //direita
	floodfill(i+1,j); //baixo
	floodfill(i,j-1); //esquerda
	floodfill(i-1,j); //cima
}

int main(){
	cin >> n;
	while(n--){
		conseguiu=false;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cin >> grid[i][j];
			}
		}
		int ans=0;
		floodfill(0,0);
		if(conseguiu) cout << "COPS" << endl;
		else cout << "ROBBERS" << endl;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				visited[i][j]=false;
			}
		}	
	}

	
	return 0;
}
