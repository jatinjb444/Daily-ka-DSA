class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int cnt = 0;
        vector<bool> track(n , false);
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < n; j++){
                if(track[j] == false && fruits[i] <= baskets[j]){
                track[j] = true;
                cnt++;
                break;
            }
        }
        }
        return n - cnt;
    }
};