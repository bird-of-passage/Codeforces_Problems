#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int t=1; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        long long k=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            k*=a[i];
        }
        k += n-1;
        k *= 2022;

        cout<<k<<endl;
    }
}