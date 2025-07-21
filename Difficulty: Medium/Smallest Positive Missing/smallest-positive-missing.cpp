class Solution {
  public:
    int missingNumber(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {

        // if arr[i] is within range [1, n] and arr[i] is
        // not placed at (arr[i]-1)th index in arr
        while (arr[i] >= 1 && arr[i] <= n
               && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != arr[i-1]) {
            return i;
        }
    }
    // If all number from 1 to n are present 
    // then n + 1 is smallest missing number
    return n + 1;
}
};