#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i *= 10){
        ans += (n - i + 1);
    }
    cout << ans << '\n';

    return 0;
}