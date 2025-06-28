class Solution {
  public:
  bool check(int mid ,vector<int>& arr, int k ){
      int cnt = 1 , sum = 0;
      for(int num : arr){
          sum += num;
          if(sum > mid){
              cnt ++;
              sum = num;
          }
      }
      if(cnt <= k) return true;
      return false;
  }
    int splitArray(vector<int>& arr, int k) {
        // code here
        int l = *max_element(begin(arr) , end(arr));
        int r = accumulate(arr.begin() , arr.end() , 0);
        int ans = 0;
        while( l <= r){
            int mid = l + ( r - l ) / 2;
            if(check(mid , arr , k)){
                ans =  mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};