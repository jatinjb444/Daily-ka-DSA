class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;  // base case for sum == k at starting index
        int currSum = 0, cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            currSum += arr[i];

            if (mpp.find(currSum - k) != mpp.end()) {
                cnt += mpp[currSum - k];
            }

            mpp[currSum]++;
        }

        return cnt;
    }
};
