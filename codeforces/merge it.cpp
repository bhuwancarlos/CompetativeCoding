#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        int i1=INT_MAX;
        cin>>n;
        cin>>s;
        for(int i=0; i<n+1; i++){
            if(s[i]=='8'){
                i1=i;
                //cout<<i1;
                goto jump;
            }
        }
        jump:
            if(n-(i1)>=11) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";

    }
        return 0 ;
}
