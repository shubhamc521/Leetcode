class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        bool f3 = false,f5 = false;
        
        for(int i=1; i<=n; i++){
            f3=f5=false;
            if(i%3==0) f3 = true;
            
            if(i%5==0) f5 = true;
            
            if(f3 && f5)
                ans.push_back("FizzBuzz");
            else if(f3 && !f5)
                ans.push_back("Fizz");
            else if(!f3 && f5)
                ans.push_back("Buzz");
            else ans.push_back(to_string(i));
        }
      return ans;  
    }
};