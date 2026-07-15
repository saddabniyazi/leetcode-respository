class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int first=-1,last=-1;
        while(low<=high){
          int mid=(low+high)/2;
          if(nums[mid]==target){
             int left=mid;
              while( left>=0 && nums[left]==target){
                   left--;
              }
              first=left+1;
              int right=mid;
              while( right<n && nums[right]==target){
                 right++;
              }
              last=right-1;
              return {first,last};
          }
          else if(nums[mid]<target){
              low=mid+1;
          }
          else{
            high=mid-1;
          }
        }
        return {first,last};
    }
};