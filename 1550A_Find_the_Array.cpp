#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a; cin>>a;
        int n = sqrt(a);
        while(n*n < a){
            ++n;
        }
        cout<<n<<endl;
    }

    return 0;
}
