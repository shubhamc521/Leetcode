class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int size = mat.size();
        int sum=0;
        
        for(int i=0; i<size; ++i)
            sum+=mat[i][i] + mat[i][size-i-1];
        
        
        if(size%2)
            sum-=mat[size/2][size/2];
        return sum;
        
        
    }
};