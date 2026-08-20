class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>res1;
        vector<int>res2;
        int n=nums.size();
        res1.push_back(nums[0]);
        res2.push_back(nums[1]);
        for(int i=2;i<n;i++){
         if(res1.back()>res2.back()){
            res1.push_back(nums[i]);
         }
         else{
            res2.push_back(nums[i]);
         }
        }
        for(int i=0;i<res1.size();i++){
            ans.push_back(res1[i]);
        }
        for(int i=0;i<res2.size();i++){
            ans.push_back(res2[i]);
        }
        return ans;
    }
};