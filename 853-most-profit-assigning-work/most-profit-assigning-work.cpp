class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sort(worker.begin() , worker.end());
        int n = worker.size();
        priority_queue<pair<int, int>> mH;
        for(int i = 0 ; i < difficulty.size(); i++){
            mH.push({profit[i] ,difficulty[i]});
        }
        // int i = n - 1;
        int p = 0; // profit at the end for ans 
        for(int i = n - 1 ; i >= 0; i--){
        while(!mH.empty() && worker[i] < mH.top().second){
            mH.pop();
        }
        if(mH.empty()) return p;
        int curr_profit = mH.top().first;
        int curr_diff = mH.top().second;
        p += curr_profit;
        mH.push({curr_profit , curr_diff});
        }
        return p;
    }
};