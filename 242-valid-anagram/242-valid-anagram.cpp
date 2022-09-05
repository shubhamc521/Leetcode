class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
        unordered_map<char,int> hm;
        
        for(int i=0; i<s.length(); i++){
            hm[s[i]]++;
            hm[t[i]]--;
        }
        
        for(auto count : hm)
            if(count.second) return false;
        return true;
        
    }
};