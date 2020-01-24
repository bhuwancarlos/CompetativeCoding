#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
    cin>>t;
    while(t--){
        int n, ans=0;
        cin>>n;
        int a;
        map<int, int> m;
        set<int> s;
        for(int i=0; i<n; i++){
            cin>>a;
            m[a]++;
            s.insert(a);
        }
        for(auto i=s.begin(); i!=s.end(); i++){
            if(m[*i]%2==0) {
                ans+=m[*i];
            }
            else if((m[*i]-1)%2==0 && m[*i]-1>0) {
                ans+=m[*i]-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
