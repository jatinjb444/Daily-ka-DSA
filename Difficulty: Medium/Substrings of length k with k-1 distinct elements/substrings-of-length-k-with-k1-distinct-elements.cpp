class Solution {
  public:
  int distinctChar(vector<int> &freq){
      int n = freq.size();
      int cnt = 0;
      for(auto i : freq){
          if(i > 0) cnt++;
      }
      return cnt;
  }
    int substrCount(string &s, int k) {
        // code here
        int n = s.length();
        vector<int> freq(26 ,0);
        int i = 0, j = 0;
        int ans = 0;
        while(j < n){
            freq[s[j] - 'a']++;
            while(j - i + 1 > k){
                freq[s[i]-'a']--;
                i++;
            }
            if(j - i + 1 == k){
            if(distinctChar(freq) == k -1){
                ans++;
            }
            }
           j++;
        }
        return ans;
    }
};