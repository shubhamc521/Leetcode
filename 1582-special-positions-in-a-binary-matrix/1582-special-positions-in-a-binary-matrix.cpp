class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int count = 0;
        
        int rsum[rows], csum[cols];
        
        //get sum of rows
        for(int i=0; i<rows; i++){
            rsum[i]=0;
            for(int j=0;j<cols;j++)
                rsum[i]+=mat[i][j];
        }
        //get sum of cols
        for(int i=0; i<cols; i++){
            csum[i]=0;
            for(int j=0;j<rows;j++)
                csum[i]+=mat[j][i];
        }
        
        //check if row and col sums is 1 or not
        
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols;j++){
                if(mat[i][j] ==1 && rsum[i] == 1 && csum[j]==1)
                    count++;
            }
        
    return count;    
    }
};