class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int n=lights.size();
        int m=arrivalTime.size();
        int ans=0;
        sort(lights.begin(),lights.end());
        for(int i=0;i<m;i++){
           int x=arrivalTime[i]%period;
           if(x<lights[n-1]){
               ans=max(ans,0);
           }
           else{
             ans=max(ans,period-x);
           }
        }
        return ans;
    }
};