class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int sign=0,ans;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<0) 
                sign++;
            else if(nums[i]==0)
                return 0;
            
        }
        if(sign%2==0) ans = 1 ;
        else ans = -1;
        
        return ans;
        
        
    }
};