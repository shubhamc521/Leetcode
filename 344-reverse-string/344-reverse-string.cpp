class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stk;
        vector<char> ans;
        
        for(int i=0;i<s.size();i++){
          char ch = s[i];
          stk.push(ch);
        }
        while(!stk.empty()){
            char ch = stk.top();
            ans.push_back(ch);
            
            stk.pop();
        }
        s = ans;
        
    }
};