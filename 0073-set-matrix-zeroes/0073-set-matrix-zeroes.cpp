class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                for(int row=0;row<n;row++){
                    if(matrix[row][j]!=0){
                        matrix[row][j]=-10;
                    }
                }
                for(int col=0;col<m;col++){
                    if(matrix[i][col]!=0){
                        matrix[i][col]=-10;
                    }
                }
                }
            }
        }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(matrix[i][j]==-10){
                        matrix[i][j]=0;
                    }
                }
            }
    }
};