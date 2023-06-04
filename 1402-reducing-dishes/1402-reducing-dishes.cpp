class Solution {
public:
    int maxSatisfaction(vector<int>& s) 
    {
        int n=s.size();
        // sort to take maximum satisfaction at the end whole time 
        sort(s.begin(),s.end());
        // just to find from where we have to start the time 
        int sum=0,temp=0,cnt=0;
        //check for whole array
        for(auto e:s)
        {
            temp+=e*(cnt++);
        }
        
        sum=max(sum,temp);
        // let i is starting point and from j=i take sum of Like-time coefficient 
        for(int i=0;i<n;i++)
        {
            cnt=1;
            temp=0;
            for(int j=i;j<n;j++)
            {
                temp+=(s[j])*(cnt++);
            }
            // just to compare the till maximum sum and temp sum start from i
            sum=max(sum,temp);
        }
        return sum;
    }
};