#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char, char> m;
        m['(']=')';
        m['[']=']';
        m['{']='}';
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('|| s[i]=='['|| s[i]=='{'){
                st.push(s[i]);
            }
            else if(st.empty()||m[st.top()]!=s[i]) return false;
            else st.pop();
        }
        if(st.empty()) return true;
        else return false;
    }
};

int main()
{	int t;
    cin>>t;
    while(t--){
        string s, t, p;
        cin>>s>>t>>p;
        map<char, int> m, n;
        for(int i=0; i<s.length()|| i<p.length(); i++){
            m[s[i]]++;
            m[p[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            n[t[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(n[t[i]]<=m[t[i]]){
                cout<<"NO";
                break;
            }
            cout<<"YES";
        }
    }
    
return 0;
}
