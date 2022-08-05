class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int len = original.size();
        vector<vector<int>> ans(m,(vector<int> (n)));
        int k=0;
        if(n*m != len) return {};
        for(int i=0; i< m ; i++){
            for(int j=0; j<n ; j++){
                //cout<<original[n++];
                ans[i][j]=original[k++];
                
            }
        }
        return ans;
        
    }
};