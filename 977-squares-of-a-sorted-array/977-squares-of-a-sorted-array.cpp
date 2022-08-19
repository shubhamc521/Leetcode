class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        
        vector <int> res(n);
        int pos = n-1;
        
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        
        return res;
    }
};
/*       

vector<int> res(nums.size()-1);
        
        int l = 0, r = nums.size()-1;
        int pos = nums.size()-1;
        while(l<=r){
            if(abs(nums[l]) < abs(nums[r])){
                res[pos--] = (nums[r]*nums[r]);
                r--;
            }
            else{
                res[pos--] = (nums[l]*nums[l]);
                l++;
            }   
        }
        return res;    
    }
};
*/
