#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    string s;
    cin>>n;
    cin>>s;
    cin>>m;
    while(m--){
        int i,j;
        string frd;
        cin>>frd;
        for(i=0; i<frd.length();){
            for(j=0; j<s.length(); j++){
                if(frd[i]==s[i]){
                    i++;
                    break;
                }
            }
        }
        cout<<j<<"\n";
    }
    return 0;
}
