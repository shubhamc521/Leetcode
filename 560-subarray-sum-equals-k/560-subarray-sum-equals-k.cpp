class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        int sum = 0 , prefix[n];
        int ans = 0;
        
        //Prefix Sum array
        for(int i=0; i<n; i++){
            sum+=nums[i];
            prefix[i] = sum;
        }
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++){
            if(prefix[i]==k)
                ans++;
            
            if(mp.find(prefix[i]-k)!=mp.end()){
                ans += mp[prefix[i]-k];
            }
            
            mp[prefix[i]]++;
        }
     return ans;   
    }
};