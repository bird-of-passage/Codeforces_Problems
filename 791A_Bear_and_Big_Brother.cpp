#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b; cin>>a>>b;
    int i;
    for(i=1; ; i++){
        a*=3;
        b*=2;
        if(a>b) break;
    }
    cout<<i<<endl;

    return 0;
}
