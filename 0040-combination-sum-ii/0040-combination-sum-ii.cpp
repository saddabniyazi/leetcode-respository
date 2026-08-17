class Solution {
     vector<vector<int>>ans;
        vector<int>ds;
     void f(int i,vector<int>& a, int target){
        if(target==0 ){
            ans.push_back(ds);
            return ;
        }
        for(int idx=i;idx<a.size();idx++){
            if(idx>i && a[idx]==a[idx-1]){
                continue;
            }
            if(target<a[idx]){
                break;
            }
            ds.push_back(a[idx]);
            f(idx+1,a,target-a[idx]);
            ds.pop_back();
        }
     }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        f(0,candidates,target); 
        return ans;
    }
};