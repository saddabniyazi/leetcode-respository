class Solution {
    private:
     void f(int i,vector<int>& candidates, int target, vector<vector<int>>&ans, vector<int>&ds){
         if(target==0 ){
            ans.push_back(ds);
            return;
         }
         if(i==candidates.size()) return;
        if(candidates[i]<=target){ ds.push_back(candidates[i]);
         f(i,candidates,target-candidates[i],ans,ds);
         ds.pop_back();
         }
         f(i+1,candidates,target,ans,ds);
     }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,candidates,target,ans,ds);
        return ans;
    }
};