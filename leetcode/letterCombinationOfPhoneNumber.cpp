#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.empty()) return result;
        map<int, string> map={
            {1,"1"},
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"},
        };
        helper(result, digits, "", 0, map);
        return result;
    }
    void helper(vector<string> &result, string digits, string current, int index, map<int, string> &map){
        if(index == digits.length()){
            result.push_back(current);
            return;
        }
        string letter = map[digits[index]-'0'];
        for(int i=0; i<letter.length(); i++){
            helper(result, digits, current+letter[i], index+1, map);
        }
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int a, b, u, v, digit, power=1, a1=0, b1=0;
        cin>>a>>b;
        while(a!=0){
            digit = a%10;
            a1 += digit*power;
            power = power*2;
            a = a/10;
        }
        power = 1;
        while(b!=0){
            digit = b%10;
            b1 += digit*power;
            power = power*2;
            b = b/10;
        }
        //cout<<a1<<b1<<endl;
        while(b1>0){
            u = a1^b1;
            v = a1&b1;
            a1 = u;
            b1 = 2*v;
            ans++;
        }        
        cout<<ans<<endl;
    }
}
