#include<bits/stdc++.h>
using namespace std;

int arrMin[200005] = {0}, arrPlus[200005] = {0};

int main(){
    int size, num;
    cin>>size>>num;

    for(int i=0; i<size; i++){ // i=0; i<7 0 1 2 3 4 5 6
        int x; cin>>x; // -1 4 -5 3 -2 -3 4
        if(x<0){
            arrMin[x*-1] = 1;
        }
        else{
            arrPlus[x]  = 1;
        }
    }

    for(int i=num; i>0; i--){
        if(arrMin[i]==0){
            cout<<-i<<'\n';
            return 0;
        }
    }

    for(int i=0; i<=num; i++){
        if(arrPlus[i]==0){
            cout<<i<<'\n';
            return 0;
        }
    }
}
