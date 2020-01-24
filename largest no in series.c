#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int l =s.length();
    int mul=1, ans;
    for(int i; i<l; i++){
        for(int j=i; j<i+4; j++){
            //cout<<mul<<endl;
            mul=mul*(s[j]-48);
            if(ans<mul) ans=mul;
        }
    }
    cout<<ans;
    //cout<<"Hello World!";
}
