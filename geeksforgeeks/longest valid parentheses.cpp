#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int ans=0;
       string str;
       cin>>str;
      int n = str.length(); 
  
    // Create a stack and push -1 as initial index to it. 
    stack<int> stk; 
    stk.push(-1); 
  
    // Initialize result 
    int result = 0; 
  
    // Traverse all characters of given string 
    for (int i=0; i<n; i++) 
    { 
        // If opening bracket, push index of it 
        if (str[i] == '(') 
          stk.push(i); 
  
        else // If closing bracket, i.e.,str[i] = ')' 
        { 
            // Pop the previous opening bracket's index 
            stk.pop(); 
  
            // Check if this length formed with base of 
            // current valid substring is more than max  
            // so far 
            if (!stk.empty()) 
                result = max(result, i - stk.top()); 
  
            // If stack is empty. push current index as  
            // base for next valid substring (if any) 
            else stk.push(i); 
        } 
    }
    cout<<result<<'\n';
    }
    return 0; 
} 