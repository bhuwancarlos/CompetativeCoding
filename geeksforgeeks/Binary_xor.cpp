#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string a, b;
        vector<string> A, B;
        set<string> s;
        cin>>n;
        cin>>a>>b;
        sort(a.begin(), a.end());
        do { 
		    A.push_back(a);
	    } while (next_permutation(a.begin(), a.end()));
        
        sort(b.begin(), b.end());
        do { 
		    B.push_back(b);
	    } while (next_permutation(b.begin(), b.end()));

        for(int i=0; i<A.size(); i++){
            for(int j=0; j<B.size(); j++){
                auto result = bitset<6>(A[i]) ^bitset<6>(B[j]);
                s.insert(result.to_string());
            }
        }
        cout<<s.size()<<endl;
        
    }
	return 0; 
}
