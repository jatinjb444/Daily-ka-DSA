class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numExchange > numBottles) return numBottles;
        int ans = numBottles;
        while(numBottles >= numExchange){
                int currans = numBottles / numExchange;
                ans += currans;
                numBottles = numBottles % numExchange;
                numBottles += currans;
        }
        return ans;
    }
};