class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        
        int j = 0;
        for(int i=1;i<length;i++){
            if(nums[i-1]==nums[i])
                continue;
            else{
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};