class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l = 0 , r = 0;
        unordered_set<int> st;
        int n = nums.size();
        int maxSum = INT_MIN , currSum = 0;
        while( r < n){
            while(st.find(nums[r]) != st.end()){
                currSum -= nums[l];
                st.erase(nums[l++]);
            }
            st.insert(nums[r]);
            currSum += nums[r];
            r++;
            maxSum = max(maxSum , currSum);
        }
        return maxSum;
    }
};