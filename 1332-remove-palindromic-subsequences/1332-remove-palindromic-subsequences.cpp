class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0,j=s.length()-1;
        bool isPalidrome = true;
        
        while(i<=j){
            if(s[i]!=s[j]) isPalidrome = false;
            i++;
            j--;
        }
        if(isPalidrome) return 1;
        else return 2;
    }
};