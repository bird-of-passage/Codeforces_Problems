#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    int a[100][100];

    int sum = 0, sum1 = 0, sum2 = 0;

    for(int i=0; i<t; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
        sum+=a[i][0];
        sum1+=a[i][1];
        sum2+=a[i][2];
    }

    if(sum==0 && sum1==0 && sum2==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


    return 0;
}
