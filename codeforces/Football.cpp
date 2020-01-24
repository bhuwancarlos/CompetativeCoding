#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int m, cnt = 0, maxcnt = 0;
    m = str[0];
    for(int i=0; i<str.length(); i++){
        if(str[i] == m) cnt++;
        else{
            m = str[i];
            maxcnt = max(cnt, maxcnt);
            cnt = 1;
        }
    }
    if(maxcnt>=7) cout<<"YES";
    else cout<<"NO";
}

