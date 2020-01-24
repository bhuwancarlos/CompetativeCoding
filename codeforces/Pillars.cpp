#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int, int> have;
	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		have[num]++;
	}
	for(pair<int, int> p:have){
		if(p.second%2!=0) cout<<p.first;
	}
	return 0;
}