class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(),nums.end());
        
        int j = 0;
        for(int i=1;i<length;i++){
            if(nums[i-1]==nums[i])
                return true;
        }     
        return false;
        
    }
        
};