class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
       int ans=1;
       priority_queue<int,vector<int>,greater<int>>pq;
       for(int i=0;i<n;i++){
         pq.push(nums[i]);
         if(pq.size()>2){
            pq.pop();
         }
       }
      ans=ans*(pq.top()-1);
      pq.pop();
      ans=ans*(pq.top()-1);
      pq.pop();
      return ans;
    }
};