#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   
        typedef function<bool(pair<int, int>, pair<int, int>)> Comparator;
        Comparator compFunctor =
			[](pair<int, int> elem1 ,pair<int, int> elem2)
			{
                if(elem1.second==elem2.second)
                return elem1.first < elem2.first;
				else return elem1.second > elem2.second;
			};
	    int n, a;
        cin>>n;
        unordered_map<int, int> cnt;
        for(int i=0; i<n; i++){
            cin>>a;
            cnt[a]++;
        }
            set<pair<int, int>, Comparator> setOfWords(
			cnt.begin(), cnt.end(), compFunctor);
            
            for (pair<int, int> element : setOfWords)
		        for( int i=0; i<element.second; i++) cout<<element.first<<" ";
            cout<<'\n';
	}
    return 0;
}
