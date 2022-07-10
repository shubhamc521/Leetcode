class Solution {
public:
    int trap(vector<int>& a) {
        
        int n = a.size();
        int lmax[n],rmax[n];
        lmax[0]=a[0];
        rmax[n-1]=a[n-1];
        
        for(int i=1; i<n; i++){
            lmax[i] = max(lmax[i-1],a[i]);
            
        }
        
        for(int i=n-2; i>=0; i--){
            rmax[i] = max(rmax[i+1],a[i]);   
        }
        
        int ans=0;
        
        for(int i=0; i<n; i++){
            ans+= (min(lmax[i],rmax[i]) - a[i]);
            //cout<<ans<<" ";
        }
        
     return ans;   
        
    }
};