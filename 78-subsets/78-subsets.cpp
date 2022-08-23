class Solution {

public:
    vector<vector<int>> subs;
        
        void subset(vector<int> & nums, int i, vector<int> sub){
            if(i==nums.size()){
                subs.push_back(sub);
                return;
            }
            subset(nums,i+1, sub);
            sub.push_back(nums[i]);
            subset(nums,i+1, sub);
            
            
            
        }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> sub;
        
        subset(nums, 0, sub);
        return subs;
        
    }
    
    
};