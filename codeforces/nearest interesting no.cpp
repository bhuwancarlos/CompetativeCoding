#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int interesting(int a){
    if(a%4==0){
        return n;
    }
    else {
        n = a % 4;
        return n;
    }
}
int main(){
    int  digit, sum = 0, ans=0;
    cin>>n;
    while(n!=0){
        digit = n % 10 ;
        sum+=digit;
        n = n / 10;
        }
        ans = interesting(sum);
        cout<<interesting(ans);
        return 0;
}