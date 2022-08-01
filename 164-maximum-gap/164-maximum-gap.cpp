class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        if(nums.empty()||nums.size()<2)
            return 0;
        int maxi = -1, mini = INT_MAX, n = nums.size();
        for(auto u : nums){
            maxi = max(maxi,u);
            mini = min(mini,u);
        }        
        
        int min_gap = (int)ceil((double)(maxi- mini)/(n-1));
        
        if(min_gap == 0 ) 
            return 0;
        
        
        
        vector <int> bucket_max(n,-1), bucket_min(n,INT_MAX);
        for(int i = 0; i<n; i++){
            int index = (nums[i]-mini)/min_gap;
            bucket_min[index] = min(bucket_min[index],nums[i]);
            bucket_max[index] = max(bucket_max[index],nums[i]);
        }
        int prev = mini, ans = 0;
        for(int i=0; i<bucket_min.size(); i++){
            if(bucket_max[i]==-1) continue;
            
            ans = max(ans, bucket_min[i]-prev);
            prev = bucket_max[i];
        }
        
        //ans = max(ans,maxi-prev);
        return ans;
    }
};