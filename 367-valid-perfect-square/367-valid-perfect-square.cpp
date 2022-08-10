class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=1; num>0; i+=2)
        {
            num-=i;
            if(num==0) return true;
        }
        return false;
        
    }
};