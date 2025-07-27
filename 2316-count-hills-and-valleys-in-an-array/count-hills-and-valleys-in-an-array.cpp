class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;
        vector<int> numsCopy;
        for(int i = 0 ; i < nums.size(); i++){
           if(numsCopy.empty() || nums[i] != numsCopy.back())
              numsCopy.push_back(nums[i]);
        }
        for(int i = 1 ; i < numsCopy.size()-1; i++){
            if(numsCopy[i] < numsCopy[i-1] && numsCopy[i] < numsCopy[i+1]){
                cnt++;
            }else  if(numsCopy[i] > numsCopy[i-1] && numsCopy[i] > numsCopy[i+1]){
                cnt++;
            }
        }
        return cnt;
    }
};