
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool operation(string str){
    string word="";
    for(auto x:str){
        if(x==' '){
            if(word == "not")
            return 1;
            else
            word = "";
        }
        else
        {
            word = x+word;
        }

    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    operation(s);
    cout<<operation;
    }
    return 0;
}
