#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string word; cin>>word;

    int length = 0;
    length = word.length();

    for(int i=0; i<length; i++){
        if(word[i]=='H' || word[i]=='Q' || word[i]=='9'){
            cout<<"YES\n";
            return 0;
        } 
        
    } 
    cout<<"NO\n";
    
    return 0;
}

