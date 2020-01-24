#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
 {  int t;
    cin>>t;
    while(t--){
        int n, ans, flag=0;
        cin>>n;
        ans = n/ sqrt(n);
        while(flag!=1){ 
        flag = prime(ans);
        if(flag == 1){
            cout<<ans<<'\n';
            break; 
        }
        ans= ans/sqrt(ans);
        }
        }
	return 0;
}