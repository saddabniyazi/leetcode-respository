class Solution {
   
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                q.push({i,j});   
                }
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
      if(cnt==0) return 0;
      vector<int>dr={-1,0,1,0};
      vector<int>dc={0,1,0,-1};
      int min=0;
      while(q.empty()==false){
        int x=q.size();
        bool flag=false;
        while(x--){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
          if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==1){
             grid[nrow][ncol]=2;
             cnt--;
             q.push({nrow,ncol});
             flag=true;
          }
        }
      }
      if(flag==true) min++;

      }
      if(cnt==0) return min;
      return -1;
    }
};