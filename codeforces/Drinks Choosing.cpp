#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int cnt = 0, ans = 0;
    for(pair<int, int> p : m){
        cnt += p.second%2;
        ans += p.second/2*2;
    }
    ans += (cnt+1)/2;
    cout<<ans;
    return 0;
}
