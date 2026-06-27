class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<pair<int,int>>ans(mp.begin(),mp.end());
        sort(ans.begin(),ans.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
       vector<int>ans1;
       for(int i=0;i<k;i++){
          ans1.push_back(ans[i].first);
       }
       return ans1;
    }
};