#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n, a;
        cin>>n;
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>a;
            m[a]++;
        }
        for(int i=0; i<n; i++){
            cout<<m[i+1]<<" ";
        }
        cout<<'\n';
    }
	return 0;
}