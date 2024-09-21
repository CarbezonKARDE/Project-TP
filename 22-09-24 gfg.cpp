class Solution {
  public:
    int lps(string str) {
        int  a =  str.size();
        vector<int> ans(a,0);
        int pre = 0 ;
         int suf= 1;
         while(suf < a){
             if(str[pre] == str[suf]){
                 ans[suf]  = pre + 1;
                 pre++; suf++;
             }
             else{
                 if(pre == 0){
                            ans[suf] = 0; suf++;
                 }
                 else{
                     pre = ans[pre-1];
                     
                 }
                 
             }
         }
         return ans[a-1];
    }
};
