class Solution {
    private:
      void f(int i,vector<vector<int>>&ans, vector<int>&res,vector<int>& nums){
         if(i==nums.size()){
            ans.push_back(res);
            return;
         }
         res.push_back(nums[i]);
         f(i+1,ans,res,nums);
         res.pop_back();
         f(i+1,ans,res,nums);
      }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
       f(0,ans,res,nums);
       return ans;
    }
};