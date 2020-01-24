#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{	string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1.size()!=s2.size()) {
        cout<<"NO";
        return 0;
    }
    else{
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";

return 0;
}
