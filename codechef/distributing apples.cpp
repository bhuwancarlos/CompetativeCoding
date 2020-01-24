#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{	
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        if(n==k && n!=1 && k!=1) cout<<"YES"<<"\n";
        else if(n<k) cout<<"YES"<<'\n';
        else{
            long long int a = n/k;
            if(a%k==0) cout<<"NO"<<'\n';
            else cout<<"YES"<<"\n";
        }
    }

return 0;
}
