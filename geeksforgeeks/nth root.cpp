#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {  int t;
    cin>>t;
    while(t--){
	float n, m;
	cin>>n>>m;
	double res = pow((double)m,1/(double)n );
    if(floor(float(res))==ceil(float(res))) cout<<res;
    else cout<<-1;
	cout<<'\n';
    }
	return 0;
}