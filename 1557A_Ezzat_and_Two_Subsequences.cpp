#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int mx = v[0];
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(v[i] > mx) mx = v[i];
            sum += v[i];
        }
        cout<<fixed<<setprecision(9)<<1.0*(sum - mx)/(n-1) + mx<<endl;
    }

    return 0;
}
