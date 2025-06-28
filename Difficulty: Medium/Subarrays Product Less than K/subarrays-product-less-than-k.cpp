class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
        long long ans = 0 ;
        if(k <= 1) return 0;
        long long currProd = 1;
        int l = 0 , r = 0;
        while(r < n){
            currProd *= arr[r];
            while(currProd >= k){
                currProd /= arr[l++];
            }
            if(currProd < k ) ans += r - l + 1;
            r++;
        }
        return ans;
  }
};