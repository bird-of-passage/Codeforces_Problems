#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        int ans = 1, cnt = 1;
        for(int i=1; i<n; i++){
            ans = max(ans, cnt);
            if(s[i] != s[i-1]) cnt = 1;
            else cnt++;
        }
        cout<<max(ans, cnt)+1<<endl;
    }
    
    return 0;
}

