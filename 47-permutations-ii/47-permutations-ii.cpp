class Solution {
public:
    public:
    void solve(vector<int> nums, vector<vector<int>>& ans , int index){
        //base case
        if(index>=nums.size()){
            //cout<<index<<" ";
            ans.push_back(nums);
            return ;
        }
        
        unordered_set<int> s;
        //recursive call
        for(int j=index;j<nums.size();j++){
            //if the element is same as before (duplicate)
            if(s.find(nums[j])!=s.end()) continue;
            
            s.insert(nums[j]);
            
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            
            //backtrack
            swap(nums[j],nums[index]);      
        }    
    }
    public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        
        solve(nums,ans,index);
        return ans;
    }
};