#include<iostream>
#include<bits/stdc++.h>

using namespace std;


  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* origin = head;
        while(head!=NULL){
            while(head->next!=NULL || head->val == head->next->val){
                head->next = head->next->next;
            }
            head = head->next;
        }
        return origin;
    }
};

int main()
{	int n, l=0, r, c;
    string str;
    cin>>n;
    cin>>str;
    r = n-1;
    int a[n+1] = {0};
    for(int i=0; i<n; i++){
        if(str[i]=='L') {
            a[l]==1;
            l++;
        }
        else if(str[i]=='R'){
            a[r]==1;
            r--;
        }
        else{
           c = str[i]-'0';
           a[c]==0;
        }
        for(int i=0; i<n; i++) cout<<a[i];
    }
return 0;
}
