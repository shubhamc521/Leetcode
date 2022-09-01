class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a[58] = {0};
        int ans =0;
        
        for(auto j:jewels){
            cout<<j - 'A'<<endl;
            a[j - 65]++;
        }
        for(auto i:stones){
            if(a[i - 65]!=0) ans++;
        }
    return ans;    
    }
};