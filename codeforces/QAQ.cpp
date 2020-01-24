#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    string str;
    cin>>str;
    n = str.length();
    for(int i=0; i<n; i++){
        if(str[i] == 'Q'){
            for(int j=i; j<n; j++){
                if(str[j] == 'A'){
                    for(int k=j; k<n; k++){
                        if(str[k] == 'Q') count ++;
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}
