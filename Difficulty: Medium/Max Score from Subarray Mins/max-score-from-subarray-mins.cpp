class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int maxSum = -1;
        for(int i = 1; i < arr.size(); i++){
            int curr_sum = arr[i] + arr[i-1];
            if(curr_sum > maxSum) maxSum = curr_sum;
        }
        return maxSum;
    }
};