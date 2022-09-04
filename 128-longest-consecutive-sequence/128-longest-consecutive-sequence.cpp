class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> hashSet;
        
        for(int num : nums){
            hashSet.insert(num);
        }
        
        int longestStreak = 0;
        
        for(int num : hashSet){
            
            if(!hashSet.count(num-1)){
                int currentNum = num;
                int currentStreak = 1;
                
                while(hashSet.count(currentNum+1)){
                    currentNum+=1;
                    currentStreak +=1;
                }
                longestStreak = max(currentStreak,longestStreak);
            }
            
        }
        
        return longestStreak;   
    }
}; 