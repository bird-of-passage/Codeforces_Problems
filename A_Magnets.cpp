#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n;
    int ans = 1;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=1; i<n; i++){
        if(v[i] != v[i-1]) ans++;
    }

    cout << ans << '\n';

    return 0;
}