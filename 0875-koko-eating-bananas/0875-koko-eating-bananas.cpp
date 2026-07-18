class Solution {
    private:
      bool check(int mid,vector<int>& piles, int h){
        long long x=0;
        for(int i=0;i<piles.size();i++){
            x += (piles[i] + mid - 1) / mid;
        }
        if(x<=h) return true;
        return false;
      }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=*max_element(piles.begin(),piles.end());
        int low=1;
        int high=maxi;
        int res=0;
        while(low<=high){
            int mid=(low+high)/2;
           if(check(mid,piles,h)){
              res=mid;
              high=mid-1;
           }
           else{
              low=mid+1;
           }
        }
        return res;
    }
};