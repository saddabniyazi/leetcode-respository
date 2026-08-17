class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n=drones.size();
        int m=drones[0].size();
        int ans=INT_MAX;
        int a=target[0];
        int b=target[1];
        int res=-1;
      for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
           int x=drones[i][0];
           int y=drones[i][1];
           int z=drones[i][2];
           int sum=abs(a-x)+abs(b-y);
           if(sum<ans && sum<=z){
             res=i;
             ans=sum;
           }
        }
      }
       return res;
    }
};