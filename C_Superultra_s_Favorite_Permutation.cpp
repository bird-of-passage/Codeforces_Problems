#include<bits/stdc++.h>
using namespace std;

int main(){ 
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if(n < 5){
            cout << -1 << '\n';
            continue;
        }

        for(int i = 2; i <= n; i+= 2){
            if(i != 4){
                cout << i << " ";
            }
        }

        cout << "4 5 ";

        for(int i = 1; i <= n; i += 2){
            if(i != 5){
                cout << i << " ";
            }
        }
        cout << '\n';
    }   


    return 0;
}