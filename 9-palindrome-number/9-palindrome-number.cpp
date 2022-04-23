class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        long long temp = x;
        long long rev = 0;
        
        while(temp){
            rev = temp%10 + rev*10;
            temp/=10;
        }
        return x==rev;
        
    }
};