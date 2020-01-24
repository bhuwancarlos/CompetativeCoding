#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--){
           int n, a[100000];
           cin>>n;
           for(int i=0; i<n; i++){
               cin>>a[i];
           }
        sort(a, a+n);
        if(a[n-1]>n-2 && a[n-2]>n-2)
            cout<<n-2<<"\n";
        else cout<<min(a[n-1], a[n-2])-1<<"\n";
       }
    return 0;
}
