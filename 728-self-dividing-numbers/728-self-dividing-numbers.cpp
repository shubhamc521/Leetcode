class Solution {
    
    
public:
    bool checkselfdividing(int num){
        int n=num, digit;
        while(n){
            digit = n%10;
            if(digit==0 || num % digit) return false;
            n /= 10;
        }
        return true;
        
        
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> res;
        for(int i=left; i<=right; i++){
            if(checkselfdividing(i))
                res.push_back(i);
        }
      return res;  
    }
};