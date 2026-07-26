class Solution {
       vector<int>dr={-1,0,1,0};
       vector<int>dc={0,1,0,-1};
      int dfs(int row,int col,vector<vector<int>>& grid){
          grid[row][col]=0;
          int area=1;
          int n=grid.size();
          int m=grid[0].size();
          for(int i=0;i<4;i++){
              int nrow=row+dr[i];
              int ncol=col+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1){
               area +=dfs(nrow,ncol,grid);
            }
          }
          return area;
     }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                   ans=max(ans,dfs(i,j,grid));
                }
            }
        }
        return ans;
    }
};