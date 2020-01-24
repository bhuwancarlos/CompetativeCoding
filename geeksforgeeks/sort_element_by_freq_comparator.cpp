#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second>b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, a;
        cin>>n;
        unordered_map<int, int> cnt;
        for(int i=0; i<n; i++){
            cin>>a;
            cnt[a]++;
        }
            vector<pair<int, int>> v;
            for(auto i=cnt.begin(); i!=cnt.end(); i++){
                v.push_back(make_pair(i->first, i->second));
            }
            sort(v.begin(), v.end(), comp);
            for (pair<int, int> element : v)
		        for( int i=0; i<element.second; i++) cout<<element.first<<" ";
            cout<<'\n';
	}
    return 0;
}
