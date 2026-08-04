class Solution {
    private:
      void f(int i,int n,vector<int>& nums,set<vector<int>>&s, vector<int>&ds){
        if(i==n){
            s.insert(ds);
            return;
        }
        ds.push_back(nums[i]);
        f(i+1,n,nums,s,ds);
        ds.pop_back();
        f(i+1,n,nums,s,ds);
      }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        int n=nums.size();
        vector<int>ds;
        f(0,n,nums,s,ds);
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};