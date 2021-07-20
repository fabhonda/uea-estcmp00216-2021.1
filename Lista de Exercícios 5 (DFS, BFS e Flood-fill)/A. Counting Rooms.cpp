#include<bits/stdc++.h>
 
using namespace std;
 
int n,m;
char grid[1003][1003];
bool visited[1003][1003];
 
void floodfill(int i, int j){
	if(i<0 || i>=n || j<0 || j>=m) return;
	if(grid[i][j]=='#' || visited[i][j]) return;
	visited[i][j] = true;
	
	floodfill(i,j+1); //direita
	floodfill(i+1,j); //baixo
	floodfill(i,j-1); //esquerda
	floodfill(i-1,j); //cima
}
 
int main(){
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> grid[i][j];
		}
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j]!='#' && !visited[i][j]){
				floodfill(i,j);
				ans++;
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}
