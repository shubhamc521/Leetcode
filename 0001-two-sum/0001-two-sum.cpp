class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        int size = nums.size();
        unordered_map<int,int> map;
        for(int i = 0; i < size; i++){
            
            int k = target - nums[i];
            if(map.find(k) != map.end()){
                ans.push_back(map[k]);
                ans.push_back(i);
                return ans;
            }
            else
                map[nums[i]] = i;   
        }
        
        return ans;
        
        
    }
};