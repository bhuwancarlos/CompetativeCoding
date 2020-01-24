#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rhombus(int x){
    int *dp = new int [1000];
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=x; i++){
        dp[i] = dp[i-1] + 4*(i-1);
    }
    return dp[x];
}
int main(){
    int n;
    cin>>n;
    int ans= rhombus(n);
    cout<<ans;
    return 0 ;
}
