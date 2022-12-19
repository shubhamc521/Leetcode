class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[temp]=nums[i];
                temp++;
                
            }
        }
        cout<<temp;
        for(int i=nums.size();i>temp;i--){
            nums.pop_back();
        }
        return temp;
    }
};