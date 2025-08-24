class Solution {
  public:
  bool check(vector<int>& arr, int k, int m , int mid){
      
      int cnt = 0 , ans = 0;
      for(int i = 0; i < arr.size(); i++){
          if(arr[i] <= mid){
              cnt++;
          }
          else {
              cnt = 0;
          }
          if(cnt == k){
              ans++;
              cnt = 0;
          }
      }
      return (ans >= m);
  }
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        if(m * k  > arr.size()) return -1;
        int low = *min_element(arr.begin() , arr.end());
        int high = *max_element(arr.begin() ,arr.end());
        
        while(low <= high){
            int mid = low + ( high - low ) / 2;
            if(check(arr , k , m , mid)){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low ;
    }
};