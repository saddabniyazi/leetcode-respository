class Solution {
public:
    int maximumLengthSubstring(string s) {
        int  n=s.length();
        unordered_map<char,int>mp;
        int l=0,r=0;
        int maxi=0;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};