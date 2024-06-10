class Solution {
public:
    void makeZero(vector<vector<int>>& mat,int x,int y){
        for(int j = 0; j < mat[0].size(); j++) {
            mat[x][j] = 0;
        }
        for(int i = 0; i < mat.size(); i++){
            mat[i][y] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>>indices;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j]==0){
                    indices.push_back(make_pair(i,j));
                }
            }
        } 
        for (const auto& p : indices) {
            int x = p.first;
            int y = p.second;
            makeZero(matrix,x,y);
        }
         
             
    }
};