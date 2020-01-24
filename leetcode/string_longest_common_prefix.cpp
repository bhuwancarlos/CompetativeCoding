class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        int min_pos = 256;
        for(int i=0; i<strs.size(); i++){
            if(strs[i].size()<min_pos) min_pos=strs[i].size();
        }
        for(int i=0; i<strs.size(); i++){
            for(int j=0; j<min_pos; j++){
                if(strs[i][j]==strs[0][j])
                    continue;
                else{
                    if(j<min_pos){
                        min_pos = j;
                        break;
                    }
                }
            }
        }
        return strs[0].substr(0, min_pos);
    }
};