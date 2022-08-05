class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> rsum;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            rsum.push_back(sum);  
        }
        return rsum;   
    }
};