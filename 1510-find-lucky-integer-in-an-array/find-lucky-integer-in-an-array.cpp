class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501 , 0);
        //constaant space acc to consttraints
        for(int num : arr){
            freq[num]++;
        }
        int ans = -1; // returnn -1 if not found
        for(int i = 1 ; i < freq.size(); i++){
            //start from i = 1 acc to constraints
            if(freq[i] == i) ans = freq[i];
        }
        return ans;
    }
};