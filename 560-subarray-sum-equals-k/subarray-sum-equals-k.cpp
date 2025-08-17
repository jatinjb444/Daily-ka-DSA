class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        mpp[0] = 1;
        int currSum = 0;
        int cnt  = 0;
        for(int i = 0 ; i < nums.size(); i++){
                currSum += nums[i];
                int rem = (currSum - k);
                if(mpp.find(rem) != mpp.end()){
                    cnt += mpp[rem];
                }
            mpp[currSum]++;
        }
       return cnt;
    }
};