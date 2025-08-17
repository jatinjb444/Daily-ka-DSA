// User function template for C++
class Solution {
  public:
  bool helper(vector<int> &vec){
      for(int &i : vec){
          if(i != 0) return false;
      }
      return true;
  }
    int search(string &pat, string &txt) {
        // code here
        int n = txt.size();
        
        vector<int> vec(26 , 0);
        for(int i = 0 ; i < pat.size(); i++){
              vec[pat[i] - 'a']++;
        }
        
        int i = 0 , j = 0 , result = 0;
        int k = pat.size();
        while(j < n){
            vec[txt[j]-'a']--;
            if(j - i + 1 == k){
                if(helper(vec)){
                    result += 1;
                }
                vec[txt[i] - 'a']++;
                i++;
            }
            j++;
    }
    return result;
}
};