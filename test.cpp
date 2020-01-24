#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        queue<TreeNode*> nextq;
        vector<int> temp;
        TreeNode* curr = root;
        q.push(curr);
        while(!q.empty()){
            curr = q.front();
            temp.push_back(curr->val);
            q.pop();
            if(curr->left!=NULL) nextq.push(curr->left);
            if(curr->right!=NULL) nextq.push(curr->right);
            if(q.empty()){
                res.push_back(temp);
                temp.clear();
                q.swap(nextq);
            }
        }
        return res;
    }
};

int main()
 {
    int t; 
    cin>>t;
    while(t--){
        int n, ans=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j]){
                    int l=i, m=j, cnt=0;
                    while(s[l]==s[m]){
                        l++; m++;
                        cnt++;
                    }
                    ans = max(ans, cnt);
                }
            }
        }
        cout<<ans<<endl;
    }
}
