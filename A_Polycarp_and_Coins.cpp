#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int c1 = 0, c2 = 0;
        
        if(n%3 == 0 || n%3 == 2) c1 = n/3;
        else if(n%3 == 1) c1 = n/3+1;

        c2 = (n-c1)/2;
        cout<<c1<<" "<<c2<<'\n';
    }

    return 0;
}