class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int l=0,r=0,maxlen=0;
        while(r<n){
            if(nums[r]==0) mp[nums[r]]++;
            while(mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};