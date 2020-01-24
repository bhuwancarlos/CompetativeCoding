#include<vector>
#include<iostream>
#include<climits>
using namespace std;
vector<vector<int>> dp, vis;
const int inf = INT_MIN;
int go(int x, int y, vector<vector<int>> &A)
    {
        if (x == A.size())
            return 0;
        if (y == A[0].size() || y == -1)
            return inf;
        int &ans = dp[x][y];
        if (vis[x][y])
            return ans;

        //case 1: (x+1, y)
        ans = max(ans, A[x][y] + go(x + 1, y, A));
        //case 2: (x+1, y-1)
        ans = max(ans, A[x][y] + go(x + 1, y - 1, A));
        //case 3: (x+1, y+1)
        ans = max(ans, A[x][y] + go(x + 1, y + 1, A));

        vis[x][y] = 1;
        return ans;
    }
int main()
{
  int rows = 4, cols = 4;
  vector<vector<int>> A(rows, vector<int>(cols, 0));
  for(int i=0; i<A.size(); i++){
    for(int j=0; j<A[0].size(); i++){
      cin>>A[i][j];
  }
  }
        dp.resize(rows, vector<int>(cols, INT_MIN));
        vis.resize(rows, vector<int>(cols, 0));

        int ans = INT_MIN;

        for (int i = 0; i < cols; i++)
        {
            //0th row, ith column as starting point
            // go(x, y) //minimum pathSum when we start the journey from (x,y) till matrix bottom
            // dp[x][y] will store what go(x, y) will return;
            ans = max(ans, go(0, i, A));
        }
        return ans;
}
