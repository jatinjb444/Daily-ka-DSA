class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
      int left = 0, right = arr.size() - 1;
        int left_max = 0, right_max = 0;
        int total_water = 0;
        while (left < right) {
            if (arr[left] < arr[right]) {
                if (arr[left] >= left_max) {
                    left_max = arr[left];
                } else {
                    total_water += left_max - arr[left];
                }
                left++;
            } else {
                if (arr[right] >= right_max) {
                    right_max = arr[right];
                } else {
                    total_water += right_max - arr[right];
                }
                right--;
            }
        }
        return total_water;
    }
};