#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin>>t;
    while(t--){
      int a, b;
      cin>>a>>b;
      int dp[a][b];
      for(int i=0; i<a; i++){
          dp[i][0] = 1;
      }
      for(int j=0; j<b; j++){
          dp[0][j] = 1;
      }
      for(int i=1; i<a; i++)
        for(int j=1; j<b; j++)
            dp[i][j]= dp[i-1][j]+dp[i][j-1];
      cout<<dp[a-1][b-1]<<'\n';
    }
    return 0;
}
