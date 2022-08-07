class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        //Bruteforce approch 
        /*
        for(int i=0; i< nums.size(); i++){
            bool found = false;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]==nums[j] && i!=j)
                    found = true;   
            }
            if(!found)
                return nums[i];
        }
        */
        
        //Sorting
        sort(nums.begin(), nums.end());
        if(n==1) return nums[0];
        
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[n-1]!=nums[n-2])
            return nums[n-1];
        
        for(int i=1; i<n-1; i++){
            if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
                return nums[i];
        }                
     return -1;   
    }
};