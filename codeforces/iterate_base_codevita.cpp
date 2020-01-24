#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
int findbase(char *str){
    int m = INT_MIN;
    int l = strlen(str);
    for(int i=0; i<l; i++){
        m = max(m, val(str[i]));
    }
    return m+1;
}
int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        if (val(str[i]) >= base)
        {
           return -1;
        }
        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}
int main() {
    char str[100000];
    int base, decimal1, decimal2;
    cin>>str;
    base = findbase(str);
    decimal1 = toDeci(str, base);
    jump:
    sprintf(str, "%d", decimal1);
    base = findbase(str);
    decimal2 = toDeci(str, base);
    if(decimal1 == decimal2){
        cout<<decimal1;
        return 0;
    }
    else{
        decimal1=decimal2;
        goto jump;
    }
    return 0;
}
