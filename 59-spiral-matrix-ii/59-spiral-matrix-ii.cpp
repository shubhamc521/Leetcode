class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0, r2 = n-1, c1= 0, c2 = n-1, val = 1;
        
        vector<vector<int>>v(n,vector<int>(n));
        
        while(r1<=r2 && c1<=c2){
            
            //Left to right : row = contant , column will increase from 0 to n-1
            for(int i=c1; i<=c2; i++)
                v[r1][i] = val++;
                
            //Top to bottom : row will increase, col = constant
            for(int i=r1+1; i<=r2; i++)
                v[i][c2] = val++;
            
            //right to left : row = contant , column will --
            for(int i=c2-1 ; i>=c1; i--)
                v[r2][i] = val++;
            
            //Bottom to up : Col = constant , row will --
            for(int i=r2-1 ; i>r1; i--)
                v[i][c1] = val++;
            
            r1++;
            c1++;
            r2--;
            c2--;
        }
        return v;  
    }
};