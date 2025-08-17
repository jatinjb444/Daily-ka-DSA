class Solution {
public:
  bool helper(vector<int> &vec){
      for(int &i : vec){
          if(i != 0) return false;
      }
      return true;
  }
    vector<int> findAnagrams(string s, string p) {
         int n = s.size();
        
        vector<int> vec(26 , 0);
        for(int i = 0 ; i < p.size(); i++){
              vec[p[i] - 'a']++;
        }
        int i = 0 , j = 0 ;
        vector<int> result;
        int k = p.size();
        while(j < n){
            vec[s[j]-'a']--;
            if(j - i + 1 == k){
                if(helper(vec)){
                    result.push_back(i);
                }
                vec[s[i] - 'a']++;
                i++;
            }
            j++;
    }
    return result;
    }
};