class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        
        unordered_map<int,int> count ;
        for(auto i:nums){
            res += count[i]++;
        }
        
     return res;   
    }
};