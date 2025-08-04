class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size() <= 2) return fruits.size();
        int l = 0 , ans = 0, r  = 0;
        int n = fruits.size();
        unordered_map<int , int> mpp;
        while ( r < n ){
            mpp[fruits[r]]++;
            while(mpp.size() > 2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
                l++;
            }
            if(mpp.size() <= 2) ans = max (ans , r - l + 1);
            r++;
        }
        return ans;
    }
};