#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{	
    int t;
    cin>>t;
    while(t--){
        int n, a;
        vector<int> sr;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            sr.push_back(a*20);
        }
        for(int i=0; i<n; i++){
            cin>>a;
            sr[i]=sr[i]-a*10;
        }
        a = *max_element(sr.begin(), sr.end());
        if(a<0) cout<<0;
        else cout<<a;
    }

return 0;
}
