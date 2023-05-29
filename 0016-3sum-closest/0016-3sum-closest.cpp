class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int ans = 0;
    int mndiff = 1e9;
    for (int i = 0; i < n; i++)
    {
        int lb = i + 1;
        int ub = n - 1;

        while (lb < ub)
        {

            int currsum = nums[i] + nums[lb] + nums[ub];
            int currdiff = abs(target - currsum);
            if (currdiff < mndiff)
            {
                ans = currsum;
                mndiff = currdiff;
            }

            if (nums[i] + nums[lb] + nums[ub] < target)
            {
                lb++;
            }
            else
            {
                ub--;
            }

        }
    }

    return ans;
}
};