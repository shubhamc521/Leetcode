class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        int l,r;
        l=0;
        r=n-1;
        
        int lmax = a[0];
        int rmax = a[n-1];
        
        int res = 0;
        
        while(l<r){
            if (lmax<rmax){
                l++;
                lmax = max(lmax,a[l]);
                res += lmax - a[l];
            }
                
            else {
                r--;
                rmax = max(rmax,a[r]);
                res += rmax - a[r];
                
            }
                
            }
            
            
            
    
        
     return res;   
        
    }
};