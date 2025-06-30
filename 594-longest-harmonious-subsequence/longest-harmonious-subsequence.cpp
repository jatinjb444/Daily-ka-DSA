class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int , int> mpp;
        for(int i = 0 ; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        int maxi = 0;
        for(auto i : mpp){
            int first = i.first;
            int second = first + 1;
           
            if(mpp.find(second) != mpp.end()){
                maxi = max(maxi , mpp[first] + mpp[second] );
            }
        }
        return maxi;
    }
};