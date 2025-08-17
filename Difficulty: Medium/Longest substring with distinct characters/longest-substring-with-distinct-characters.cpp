class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.size();
        vector<int> vec(26 , 0);
        int i = 0 , j = 0 , res = 0;
        while( j  < n){
            vec[s[j]-'a']++;
            while(vec[s[j]-'a'] > 1){
                vec[s[i]-'a']--;
                i++;
            }
         res = max(j - i + 1 , res);
         j++;
        }
         
         return res;
            
    }
};
