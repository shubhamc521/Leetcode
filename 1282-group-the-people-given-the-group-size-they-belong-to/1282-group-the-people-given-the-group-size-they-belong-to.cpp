class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSize) {
        vector<vector<int>> ans;
        map<int,vector<int>> mp;
        
        for(int i=0;i<groupSize.size();i++){
            
            mp[groupSize[i]].push_back(i);
            
            if(mp[groupSize[i]].size() == groupSize[i]){
                ans.push_back(mp[groupSize[i]]);
                mp[groupSize[i]] = {};
            }
            
        }
     return ans;   
    }
};

