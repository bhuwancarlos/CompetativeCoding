#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> v(100000);
    int a=0, b=1, f;
     v[0]=a;
        v[1]=b;
       for(int i=2; i<100000; i++){
           f=(a+b)%10;
           a=b%10;
           b=f%10;
           //cout<<f<<" ";
           v[i]=f;

       }
        //for(auto x:v) cout<<x<<" ";
    while(t--){
       long long int n, cnt=0;
       cin>>n;
       cnt = log2(n);
       //cout<<cnt<<" ";
       cout<<v[pow(2,cnt)-1]<<"\n";

    }
    return 0;
}
