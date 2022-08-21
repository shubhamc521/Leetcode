class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = 0, col = 0;
        
        for(int i=0; i<matrix.size(); i++)
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    if(i==0) row = 1;
                    if(j==0) col = 1;
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        for(int i=1; i<matrix.size(); i++)
            for(int j=1; j<matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        
        if(row)
            for(int j=0; j<matrix[0].size(); j++) matrix[0][j] = 0;
        
        if(col)
            for(int i=0; i<matrix.size(); i++) matrix[i][0] = 0;
        
        
        
    }
};