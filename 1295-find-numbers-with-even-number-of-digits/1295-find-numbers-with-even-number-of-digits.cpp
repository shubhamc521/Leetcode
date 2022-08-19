class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans =0;
        for(auto n : nums){
            int count = 0;
            while(n){
                n/=10;
                count++;
            }
            if(count%2==0)
                ans++;
        }
    return ans;    
    }
};