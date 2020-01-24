#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int calc(string s){
    int digit = (s[0]-'0')*10 + s[1]-'0';
    return digit;  
}
class Solution {
public:
    int dayOfYear(string date) {
        int lflag = 0, dat, month, year, ans=0;
        map<int, int> m{{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
        dat = calc(date.substr(8,2));
        month = calc(date.substr(5,2));
        year = calc(date.substr(2,2));
        if(year != 0){
            if(year%4==0) lflag = 1;
        }
        for(int i=1; i<=month-1; i++){
            ans += m[i];
        }
        ans += dat;
        if(month>2){
            if(lflag==1) ans++;
        }
        return ans;
    }
};
