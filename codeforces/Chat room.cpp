#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='h'){
            for(int j=i+1; j<str.length(); j++){
                if(str[j]=='e'){
                    for(int k=j+1; k<str.length(); k++){
                        if(str[k]=='l'){
                            for(int l=k+1; l<str.length(); l++){
                                if(str[l]=='l'){
                                    for(int m=l+1; m<str.length(); m++){
                                         if(str[m]=='o'){
                                             cout<<"YES";
                                             return 0;
                }
                }
                }
                }
            }               
        }
    }
    }
    }
    }
    cout<<"NO";
return 0;
}
