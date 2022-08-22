class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = m-1;
        
        vector<int> res;
        int i;
        
        while(left<=right and top <= bottom){
            // left to right
            for(i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;
            
            //top to bottom
            for(i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;
            
            
            if(left > right || top > bottom) break;
            //right to left
            for(i = right; i >= left; i--) {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            //bottom to top
            for(i=bottom; i >= top; i--) {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return res;
    }
};