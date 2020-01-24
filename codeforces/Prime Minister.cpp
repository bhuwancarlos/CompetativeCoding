#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n, sum=0;
	cin>>n;
	int a[n];
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>a[i];
		sum+=a[i];
	}
	int curr = a[0];
	if(a[0]>sum){
		cout<<1<<"\n"<<1;
	}
	else{
		for(int i=1; i<n; i++){
			if(a[i]<a[0]/2){
				v.push_back(i+1);
				curr+=a[i];
			}
		}
		if(curr>sum){
			cout<<v.size()<<"\n";
			for(auto j=v.begin(); j!=v.end(); j++)
			cout<<*j<<" ";
		}
		else
		{
			cout<<0;
		}
		
	}
	
	return 0;
}
