class Solution {
    private:
     int f(int l,int r,vector<int>& nums, int target){
        if(l>r) return -1;
        int mid=(l+r)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return f(mid+1,r,nums,target);
        else return f(l,mid-1,nums,target);
     }
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
         return f(l,r,nums,target);
        
    }
};