class Solution {
public:
    int mySqrt(int x) {
        int s = 0, e = INT_MAX;
        long long int ans,mid;
        while(s<=e){
            mid = s + (e-s)/2;
            if(mid*mid <= x)
            {
                ans = mid;
                s = mid + 1;
            }
            else e = mid -1;
        }
        
    return ans;    
    }
};