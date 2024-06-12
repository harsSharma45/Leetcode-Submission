class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int mx = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                mx = max(mx,mat[i][j]);
            }
        }
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j]==mx){
                    return {i,j};
                }
               // mx = max(mx,mat[i][j]);
            }
        }
        return {-1,-1};
    }
};