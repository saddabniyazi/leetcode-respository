class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int res=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(k==1){
             if(mp[nums[n-i-1]]==1){
                res=max(res,nums[n-i-1]);
             }
            }
             else if(k==n){
                res=max(res,nums[i]);
             }
             else{
                if(mp[nums[n-1]]==1){
                    res=max(nums[n-1],res);
                }
                 if(mp[nums[0]]==1){
                    res=max(nums[0],res);
                }
             }
        }
        return res;
    }
};