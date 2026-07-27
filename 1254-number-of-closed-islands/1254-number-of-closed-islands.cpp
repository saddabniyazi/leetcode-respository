class Solution {
    vector<int>dr={-1,0,1,0};
    vector<int>dc={0,1,0,-1};
    bool dfs(int row,int col,vector<vector<int>>& grid){
        grid[row][col]=1;
        bool flag=true;
        int n=grid.size();
        int m=grid[0].size();
        if(row==0 || col==0 || row==n-1 || col==m-1) flag=false;
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==0){
             flag= dfs(nrow,ncol,grid) && flag; 
         }
        }
     return flag;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
              if(dfs(i,j,grid)==true){
                 cnt++;
              }
                }
            }
        }
        return cnt;
    }
};