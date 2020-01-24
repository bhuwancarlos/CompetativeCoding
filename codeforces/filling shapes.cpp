#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n, a[501][501], i1, j1, count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i+1][j+1]=='*' && a[i+1][j]=='*' && a[i+1][j+2]=='*' && a[i][j+1]=='*' && a[i+2][j+1]=='*'){
                i1=i+1; j1=j+1;
                count ++;
            }
            else cout<<"NO";
            return 0;
        }
    }
    if (count >1){
        cout<<"NO";
        return 0;
    }
    else if(count==1){
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='*'){
                if(i!=i1|| j!=j1){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    }
    cout<<"YES";
    return 0 ;
}

