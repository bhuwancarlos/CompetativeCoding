#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool abundant(int n){
    int sum=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i==i){
                sum+=i;
            }
            else {
                int s1 = i + n/i;
                sum+=s1;
            }
        }
    }
    sum = sum-n;
    if (sum>n) return true;
    else return false;
}
int main() {
    vector <int> A;
    long long sum = 0 , sum1 = 0;
    for (int i=1; i<=28123; i++){
        int n1 = abundant(i);
        if(n1==0){
            sum+=i;
            //cout<<i<<endl;
        }
        if(n1==1){
            sum1 +=i;
            cout<<i<<endl;
        }
    }
    cout<<endl<<sum1;//cout<<"Hello World!";
}
