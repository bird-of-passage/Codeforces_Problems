#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (n%2 ? "Kosuke" : "Sakurako") << '\n';
    }
    
    return 0;
}