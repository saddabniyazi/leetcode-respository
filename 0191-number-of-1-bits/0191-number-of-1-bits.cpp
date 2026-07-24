class Solution {
public:
    int hammingWeight(int n) {
        int cnt=1;
        while(n!=1){
            if(n%2!=0) cnt++;
            n=n/2;
        }
        return cnt;
    }
};