class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin() , players.end());
        sort(trainers.begin() , trainers.end());
        int n2 = trainers.size() , n1 = players.size();
        int l = 0 , r = 0;
        int cnt = 0;
        while(l < n1 && r < n2){
            if(players[l] <= trainers[r]) {
                cnt++;
               if(l <= n1) l++;
               if(r <= n2) r++;
            }
            else if(r >= 0) r++;
        }
        return cnt;
    }
};