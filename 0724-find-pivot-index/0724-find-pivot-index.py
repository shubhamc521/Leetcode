class Solution(object):
    def pivotIndex(self, nums):
            
            for i in range(0,len(nums)):
                leftsum = sum(nums[:i])
                
                
                
                rightsum = sum(nums[i+1:])
                
                if(leftsum == rightsum):
                    return i
            return -1