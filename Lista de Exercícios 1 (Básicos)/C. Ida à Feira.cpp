#include <bits/stdc++.h>
#define pb push_back 
 
using namespace std;
 
int main() {
    int n, m, p, qtd;
    string produto, produto_compra;
    float preco, total;
    cin >> n;
    vector<string> produtos;
    vector<float> precos;
    while(n--){
    	cin >> m;
    	for(int i=0;i<m;i++){
    		cin >> produto >> preco;
    		produtos.pb(produto);
    		precos.pb(preco);
		}
		cin >> p;
		total = 0, qtd=0;
		for(int j=0;j<p;j++){
			cin >> produto_compra >> qtd;
			for(int k=0;k<produtos.size();k++){
				if(produto_compra == produtos[k]) total += (qtd*precos[k]);
			}
		}
		produtos.clear();
		precos.clear();
		printf("R$ %.2f",total);
		cout << endl;
	}
    return 0;
}
