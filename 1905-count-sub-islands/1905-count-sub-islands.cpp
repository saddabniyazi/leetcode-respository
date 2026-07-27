class Solution {
    vector<int>dr={-1,0,1,0};
    vector<int>dc={0,1,0,-1};
    bool dfs(int row,int col,vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        bool flag=true;
      if(grid1[row][col]==0) flag=false;
        int n=grid2.size();
        int m=grid2[0].size();
        grid2[row][col]=0;
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid2[nrow][ncol]==1){
               flag=dfs(nrow,ncol,grid1,grid2) && flag;
            }
        }
   return flag;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid2.size();
        int m=grid2[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                   if(dfs(i,j,grid1,grid2)==true){
                     cnt++;
                   }
                }
            }
        }
        return cnt;
    }
};