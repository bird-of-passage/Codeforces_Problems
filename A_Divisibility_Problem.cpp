#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int t; cin >> t;

    while(t--){
        int a, b; cin >> a >> b;
        int ans = (b - a%b) % b;
        cout << ans << '\n';
    }

    return 0;
}