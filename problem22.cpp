#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lengthsum(string s){
    int l = s.length();
    int sum = 0;
        for(int i=0; i<l; i++){
            sum += s[i] - 64;
        }
        return sum;
}
int main(){
    string str[2] = {"COLIN", "COLIN"};
    int score = 0;
    for(int i=1; i<=2; i++){
        int a = lengthsum(str[i]);
        int b = a*i;
        score += b;
    }
    cout<<score;
    return 0;
}
