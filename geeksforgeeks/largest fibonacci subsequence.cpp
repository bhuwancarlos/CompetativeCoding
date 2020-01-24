#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
    cin>>t;
    while(t--){
        int n, ans=0, arr[1000], cnt=2, a;
        cin>>n;
        int *p;
        arr[0] = 0; arr[1]=1;
        map<int, int> m;
        for(int i=2; i<1000; i++){
            arr[i] = arr[i-1]+arr[i-2];
            cnt++;
            if(arr[i]>1000) break;
        }
        for(int i=0; i<n; i++) {
            cin>>a;
            p = find(arr, arr+cnt, a);
            if(p!=arr+cnt) cout<<a<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
