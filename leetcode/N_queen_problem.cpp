#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issafe(int board[][10], int i, int j, int n){
    for(int row=0; row<i; row++){
        if(board[row][j]==1){
            return false;
        }
    }
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1) return false;
        x--;
        y--;
    }
    x=i;
    y=j;
    while(x>=0 && y<0){
        if(board[x][y]==1) return false;
        x--;
        y++;
    }
    return true;
}

bool solveNqueen(int board[][10], int i, int n){
    if(i==n){
        for(int =0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    for(int j=0; j<n; j++){
        if(issafe(board, i, j, n)){
            board[i][j]=1;
            bool nextQueenRakhPaye = solveNqueen(board, i+1, n);
            if(nextQueenRakhPaye) return true;
            board[i][j]=0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int board[10][10]={0};
    solveNqueen(board, 0, n);
    return 0;
}
