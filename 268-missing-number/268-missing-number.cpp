class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        int sum1 = (n * (n+1) /2);
        int sum = 0;
        int i=0;
        while(i<n){
            
            sum += nums[i];
            i++;
        }
        
        return sum1 - sum;
  
    }
};