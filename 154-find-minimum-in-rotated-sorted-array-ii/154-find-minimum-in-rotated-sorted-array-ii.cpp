class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high = nums.size()-1;
        if (nums[low]<nums[high])
                return nums[low];
        while(low<high){
            
            int mid=(low+high)/2;
            
            if(nums[mid]>nums[high])
                low = mid + 1;
            else if(nums[low]>nums[mid]) 
                high=mid;
            else high--;
            //cout<<nums[low]<<" ";
        }
        return nums[low];
        
    }
};