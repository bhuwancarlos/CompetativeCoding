#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{	int date[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dd, mm, yy;
    cin>>dd>>mm>>yy;
    if(mm<=12){
        if(dd<=31){
            if(date[mm-1]>=dd) {cout<<"valid date"; return 0;}
            else if(yy%4==0 && yy%100!=0){
                if(mm==2){
                if(dd<=29) {cout<<"valid date"; return 0;}
                }
            }
            else if(yy%400==0){
                if(mm==2){
                if(dd<=29) {cout<<"valid date"; return 0;}
                }
        }
    }
    }
    cout<<"Not valid date";
return 0;
}
