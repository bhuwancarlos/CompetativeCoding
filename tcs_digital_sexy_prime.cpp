#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool isprime(int a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return false;
    }
    return true;
}
int main()
{	int a, b, cnt=0, c;
    cin>>a>>b;
    vector<int> v;
    vector<int> ::iterator it;
    for(int i=a; i<=b; i++){
        c = isprime(i);
        if(c==1){
            v.push_back(i);
        }
    }
    for(int j=0; j<v.size(); j++){
        it = find(v.begin(), v.end(), v[j]+6);
        //cout<<v[j]<<" ";
        if(it!=v.end()) cnt++;
    }
    cout<<cnt;
return 0;
}