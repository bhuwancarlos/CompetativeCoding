#include<bits/stdc++.h>
using namespace std;
int ways(int n){
	int dp[n], ans = 0;
	dp[0] = 1;
	for(int i = 1; i<=n; i++){
		dp[i] = 0;
		for(int j=1; j<=2; j++){
			if(i-j>=0){
				dp[i] += dp[i-j];
			}
		}
	}
	return dp[n];
}

int main()
 {
	//code
	int T;
	cin>>T;
	while(T--)
	{	
		int n; 
		cin>>n;
		cout<<ways(n)<<"\n";

	}
	return 0;
}
