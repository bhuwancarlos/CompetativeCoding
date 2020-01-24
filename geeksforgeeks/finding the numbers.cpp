#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n, a;
       vector<int>b;
       cin>>n;
       map<int, int> cnt;
       for(int i=0; i<(2*n+2); i++){
           cin>>a;
           cnt[a]++;
       }
       for(auto i=cnt.begin(); i!=cnt.end(); i++){
           if(i->second%2!=0){
               b.push_back(i->first);
           }
       }
       if(b[0]>b[1]) cout<<b[1]<<" "<<b[0];
       else cout<<b[0]<<" "<<b[1];
       cout<<"\n";
    }
return 0;
}
