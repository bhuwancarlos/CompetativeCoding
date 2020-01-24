class Solution {
public:
    int calc(int i, int j){
        if(j==0 || j==i) return 1;
        else return calc(i-1, j-1) + calc(i-1, j);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if( numRows == 0) return triangle;
        //return triangle;
        for(int i=0; i<numRows; i++){
            vector<int> row;
            for(int j=0; j<=i; j++){
                row.push_back(calc(i, j));
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};