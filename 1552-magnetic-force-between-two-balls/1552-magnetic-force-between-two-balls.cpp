class Solution {
public:
    
    bool check(vector<int> &a, int mid, int m){
        int initial = 1;
        int prev = a[0];
        
        for(int i=1; i<a.size(); i++){
            if(a[i]-prev >= mid){
                prev = a[i];
                initial++;
                if (initial == m) return true;
            }
        }
        if(initial < m ) return false;
        return true;
    }
    
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int low = 0;
        int high = position[n-1];
        
        
        int ans;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(check(position, mid, m) ){
                ans = mid;
                low = mid + 1;
            }
            
            else high = mid -1;
            
        }
        return ans;
        
    }
};