class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> helper;
        helper.push_back(startTime[0] - 0);
        for(int i = 1 ; i < startTime.size(); i++){
            helper.push_back(startTime[i] - endTime[i - 1]);
        }
        helper.push_back(eventTime - endTime[endTime.size() - 1]);
      // now i got vector 
      //i need ==  k + 1 sized subbaray max sum
      int l = 0 , r = 0;
      int ans = 0 , cnt = 0;
    //unordered_map<int , int> mpp;
      while(r < helper.size()){
           cnt += helper[r];
            if (r - l + 1 == k + 1) {
            ans = max(ans, cnt);          
            cnt -= helper[l];   
            l++;
            }
            r++;
    }
          return ans;
}
};