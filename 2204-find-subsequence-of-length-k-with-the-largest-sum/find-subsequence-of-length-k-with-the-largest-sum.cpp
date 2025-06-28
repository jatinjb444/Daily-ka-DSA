class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        //can be done using two heaps 
        //pehle ek heap mai dalo k top ke nikalo
        //fir second heap mai vohi k dao index se sort kro
        //and u r dodone boooommm
       priority_queue<pair<int,int>> mH;
       for(int i = 0 ; i < nums.size(); i++){
        mH.push({ nums[i] , i });
       } 
       vector<int> ans;
      vector<pair<int , int>> temp;
       while(k--){
        // int num = mH.top().first;
        // int idx = mH.top().second;
        // mH.pop();
        temp.push_back(mH.top());
        mH.pop();
       }
       std::sort(temp.begin(), temp.end(), [](const auto& a, const auto& b) {         return a.second < b.second; });

       for(int i = 0 ; i < temp.size(); i++){
            ans.push_back(temp[i].first);
       }
       return ans;
        }
    };