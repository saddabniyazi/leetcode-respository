class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0) return 0;
        int maxi=1;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]) continue;
            if(nums[i-1]+1==nums[i]){
                cnt++;
            maxi=max(maxi,cnt);
            }
            else{
                cnt=1;
            }
        }
        return maxi;
    }
};