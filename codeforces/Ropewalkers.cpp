#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0 ;
    map<char, int> cnt1, cnt2;
    string s1, s2;
    cin>>n;
    while(n--){
        cin>>s1>>s2;
        for(char c:s1) cnt1[c]++;
        for(char c:s2) cnt2[c]++;
        for(int i=0; i<s1.size(); i++){
                string s;
                s=s1[i];
            if(cnt1[s1[i]]>cnt2[s1[i]]) count++;
        }
        if(count) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
        }
        return 0 ;
}
