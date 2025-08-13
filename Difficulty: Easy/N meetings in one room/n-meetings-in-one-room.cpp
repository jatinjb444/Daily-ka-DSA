class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> meetings;
        for(int i = 0 ;i < start.size(); i++){
            meetings.push_back({start[i] , end[i]});
        }
    sort(meetings.begin(), meetings.end(), 
        [](const pair<int,int> &a, const pair<int,int> &b) {
            return a.second < b.second; // sort by second element
        });
        int cnt = 0;
        int end_time = -1;
        for(int i = 0; i < meetings.size(); i++){
            if(cnt == 0 || end_time < meetings[i].first){
                end_time = meetings[i].second;
                cnt++;
            }
        }
        return cnt;
    }
};