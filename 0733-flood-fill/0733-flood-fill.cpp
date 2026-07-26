class Solution {
    vector<int>dr={-1,0,1,0};
    vector<int>dc={0,1,0,-1};
    private:
      void dfs(vector<vector<int>>& image,int inicol,int color,int row,int col){
          image[row][col]=color;
          int n=image.size();
          int m=image[0].size();
         for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicol){
                 dfs(image,inicol,color,nrow,ncol);
            }
         }
      }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int inicol=image[sr][sc];
        if(inicol==color) return image;
         dfs(image,inicol,color,sr,sc);
         return image;
    }
};