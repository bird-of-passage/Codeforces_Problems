#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;

        
void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
     int n, k; cin >> n >> k;
     if(k == (4*n)-2) cout << 2*n << '\n';
     else cout << (k+1)/2 << '\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}