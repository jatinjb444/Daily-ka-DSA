class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        sort(arr.begin() , arr.end());
        int l = 0 , r = n - 1;
        while( l < r){
            if(arr[l] + arr[r] == target) return true;
            else if (arr[l] + arr[r] < target){
                l++;
            }else{
                r--;
            }
        }
        return false;
    }
};