class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) ans2++;
        }
        if(ans2==n) return 0;
        for(int i=0;i<n;i++){
           ans1=ans1^nums[i];
        }
        if(ans1!=0) return n;
       return n-1;
    }
};