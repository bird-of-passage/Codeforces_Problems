#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        
        int n; cin>>n;

        int ans = n/2;

        if(n % 2 == 1) ans++;

        cout<<ans<<endl;
    }
    
    return 0;
}

