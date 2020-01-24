#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	string s = "bhuwan is a good good", s2="good";
    //getline(cin, s);
    //cin>>s2;
    int flag=0, cnt=0;
    while(flag!=-1){
        flag = s.find(s2);
        if(flag == -1) break;
        cout<<flag<<" ";
        s = s.erase(flag, s2.length());
        cout<<s<<" ";
        cnt++;
    }
    cout<<cnt;

	return 0;
}
