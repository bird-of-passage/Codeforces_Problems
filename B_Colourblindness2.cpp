#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;

        bool ck = 1;
        for(int i=0; i<n; i++){
            if((s1[i] == 'R' && s2[i] != 'R') || (s2[i] == 'R' && s1[i] != 'R')){
                ck = 0;
                break;
            } 
        }

        if(ck) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}