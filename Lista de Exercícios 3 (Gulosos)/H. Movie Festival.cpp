#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<long long, long long> &a,const pair<long long, long long> &b){
   if(a.second != b.second) return a.second < b.second;
   return a.first < b.first;
}

int main(){
   long long n, x, y;
   cin >> n;
   vector<pair<long long, long long> > hr(n);
   for(int i=0; i<n;i++){
         cin >> x >> y;
         hr[i].first = x; hr[i].second = y;
   }
   sort(hr.begin(), hr.end(), cmp);
   long long cont=1, i=0, j=1;
   while (j<hr.size()){
         if(hr[i].second <= hr[j].first){cont++;i=j;}
         j++;
   }
   cout << cont << endl;
   return 0;
}
