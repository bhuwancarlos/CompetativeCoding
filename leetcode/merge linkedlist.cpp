#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* head = NULL;
        if(l1->val < l2->val) {
            head = l1;
            l1 = l1->next;
            }
        else{
            head = l2;
            l2 = l2->next;
        }
        ListNode* p = head;
        while(l1&&l2){
            if(l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
            }
        else{
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
        }
        if(l1){
            p->next = l1;
            l1 = l1->next;
        }
        if(l2){
            p->next = l2;
            l2 = l2->next;
        }
        return head;
    }
};

int main()
{	int t;
    cin>>t;
    while(t--){
        string s, t, p;
        cin>>s>>t>>p;
        map<char, int> m, n;
        for(int i=0; i<s.length()|| i<p.length(); i++){
            m[s[i]]++;
            m[p[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            n[t[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(n[t[i]]<=m[t[i]]){
                cout<<"NO";
                break;
            }
            cout<<"YES";
        }
    }
    
return 0;
}
