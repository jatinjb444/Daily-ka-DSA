class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0 ,  mini = INT_MAX , cost = 0;
        for(int i = 0 ; i <prices.size() ;i++){
                if(prices[i] < mini){
                    mini = min(mini , prices[i]);
                }
         maxProfit = max(maxProfit,prices[i] - mini);
        }
        return maxProfit;
    }
};