class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int temp = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                temp++;
                //cout<<temp<<" ";
            }
            else temp = 0;
            count = max(count,temp);
            
        }
        return count;   
    }
};