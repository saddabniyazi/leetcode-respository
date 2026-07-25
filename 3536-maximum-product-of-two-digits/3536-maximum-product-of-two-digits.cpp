class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        int maxi=0;
        while(n>0){
            int x=n%10;
            ans.push_back(x);
            n=n/10;
        }
          for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                if(i!=j){
                    int r=ans[i]*ans[j];
                    maxi=max(r,maxi);
                }
            }
          }
          return maxi;
    }
};