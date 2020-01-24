#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   string s;
   string res;
   cin>>n>>s;
   for(int i=0; i<n; i++){
        if(res.back()!=s[i] || res.size()%2==0){
            res.push_back(s[i]);
        }
   }
    if(res.size()%2!=0)
        res.pop_back();
    cout<<n-res.size()<<"\n"<<res;
    return 0 ;
}
