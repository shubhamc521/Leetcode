class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int k = target - nums[i];
            for(int j = i+1 ; j<nums.size(); j++){
                if(nums[j] == k){
                ans.push_back(i);
                ans.push_back(j);
                }   
            }
            
        }
        return ans;
        
    }
};