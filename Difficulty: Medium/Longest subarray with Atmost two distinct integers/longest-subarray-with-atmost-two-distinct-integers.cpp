class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n = arr.size();
        int l = 0 , r = 0;
        unordered_map<int , int> mpp;
        int ans = 0;
        while( r < n){
            mpp[arr[r]]++;
            while(mpp.size() > 2){
                mpp[arr[l]]--;
                if(mpp[arr[l]] == 0) mpp.erase(arr[l]);
                l++;
            }
            ans = max(ans ,  r - l + 1);
            r++;
        }
        return ans;
    }
};