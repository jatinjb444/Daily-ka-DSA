class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
    int ans = 0;
      int l = 0 , r= 0 , n = arr.size();
     unordered_map<int , int> mpp;
      while(r < n){
          mpp[arr[r]]++;
          while(mpp.size() > k){
              mpp[arr[l]]--;
              if(mpp[arr[l]] == 0)mpp.erase(arr[l]);
              l++;
          }
          ans += r - l + 1;
          r++;
      }
      return ans;
  }
};