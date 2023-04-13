/* 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        int length = nums.size();
        while(k){
            temp = nums[length-1];
            for(int i = length-1; i>0;i--){
                nums[i]=nums[i-1];  
            }
            nums[0]=temp;
            k--;
            
            
        }
        
    }
};
*/

class Solution {
    
public:
    void reverse(vector<int> &nums,int start,int end){
        while(start<end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
            
        }
    }
    
    
    void rotate(vector<int>& nums, int k) {
        k %=nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);   
        }
        
    
};
