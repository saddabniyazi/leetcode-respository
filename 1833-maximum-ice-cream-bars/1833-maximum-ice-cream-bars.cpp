class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int ans=0;
        int i=0;
        while(i<n && coins>=costs[i]){
            ans++;
            coins=coins-costs[i];
            i++;
        }
        return ans;
    }
};