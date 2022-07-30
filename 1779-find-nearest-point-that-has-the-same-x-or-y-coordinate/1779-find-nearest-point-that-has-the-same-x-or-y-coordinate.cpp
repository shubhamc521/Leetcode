class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int len = points.size(), max = INT_MAX, ans = -1, manhattan;
        
        for(int i=0 ; i<len; i++){
            if(points[i][0]==x || points[i][1] == y){
                manhattan = abs(x-points[i][0]) + abs(y-points[i][1]);   
                if(manhattan < max){
                    ans = i;
                    max = manhattan;
                }
            } 
        }
      return ans;  
    }
};