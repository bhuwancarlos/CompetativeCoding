#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n, ans=0;
       cin>>n;
       vector<long long int> v(n);
       for(int i=0; i<n; i++){
           cin>>v[i];
       }
       for(int i=0; i<n; i++){
           for(int j=n-1; j>i; j--){
           if(v[i]<=v[j]){
               ans = max(ans, j-i);
               break;
           }
       }
       }
        cout<<ans<<'\n';
    }
return 0;
}
