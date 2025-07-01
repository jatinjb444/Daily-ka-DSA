class Solution {
public:
    int possibleStringCount(string word) {
        int curr = 0;
        int ans = 0;
        for(int i = 1; i < word.size(); i++){
            if(word[i] == word[i-1]){
                curr++;
            }
        }
        ans += curr + 1;
        return ans;
    }
};