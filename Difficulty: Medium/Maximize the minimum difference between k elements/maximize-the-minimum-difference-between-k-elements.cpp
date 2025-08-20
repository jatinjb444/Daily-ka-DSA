class Solution {
  public:
  bool isPossible(vector<int>& arr, int k , int mid){
      
      int last = arr[0] ,count = 1;
      for(int i = 1; i< arr.size(); i++){
          if(arr[i] - last >= mid){
              count++;
              last = arr[i];
          }
          if(count == k) return true;
      }
      return false;
  }
    int maxMinDiff(vector<int>& arr, int k) {
        // code here
        sort(arr.begin() , arr.end());
        int l = 0 , r = arr[arr.size()-1] - arr.front(), ans =0;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(isPossible(arr ,k , mid)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans;
    }
};
