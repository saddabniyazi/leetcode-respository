class Solution {
    private:
      void f(string curr, vector<string>&res,int n){
        if(curr.size()==n){
            res.push_back(curr);
            return;
        }
         f(curr+'1',res,n);
         if(curr.empty() || curr.back()!='0'){
             f(curr+'0',res,n);
         }
      }
public:
    vector<string> validStrings(int n) {
        string curr="";
        vector<string>res;
        f(curr,res,n);
        return res;
    }
};