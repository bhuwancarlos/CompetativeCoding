#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool ifpalindrome(string s){
    int length = s.length();
    for(int i=0;i < length/2 ;i++){
        if(s[i] != s[length-i-1]){
            return 0;
   }
   return 1;
}
}
int nextstr(string s){
    int ans;
    sort(s.begin(), s.end());
    do{
        ans = ifpalindrome(s);
        if(ans == 1) return 1;
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}
int main()
{
	int t, c = 1;
	cin>>t;
	while(t--)
	{
	    int n, q, cnt=0, ans;
        string s, str;
        cin>>n>>q;
        cin>>s;
        int l[1000], r[1000];
        for(int i=0; i<q; i++){
            cin>>l[i]>>r[i];
            str = s.substr(l[i]-1, r[i]-l[i]-1);
            ans = nextstr(str);
            if(ans == 1) cnt++;
        }
        cout<<"case #"<<c<<": "<<cnt<<'\n';
        c++;
	}
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
