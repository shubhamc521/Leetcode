class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> f(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            if(f[nums[i]]!=0)
                return nums[i];
            else f[nums[i]]++;
        }
     return -1;   
    }
};