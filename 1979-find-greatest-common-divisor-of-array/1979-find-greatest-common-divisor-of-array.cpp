class Solution {
    public:
        int gcd(int a, int b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        }
        int findGCD(vector<int> &nums) {
            int min = 1001;
            int max = 0;
            // Find the min and max from array
            sort(nums.begin(),nums.end());
            min=nums[0]; max=nums[nums.size()-1];
            return gcd(min, max);
        }
};