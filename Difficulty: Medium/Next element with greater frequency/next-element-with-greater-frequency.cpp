class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        stack<int> st;
        unordered_map<int, int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        int n = arr.size();
        vector<int> ans(n , -1);
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && mpp[arr[i]] >= mpp[st.top()]){
                st.pop();
            }
        ans[i] = st.empty() ? -1 : st.top();
           st.push(arr[i]);
        }
        return ans;
    }
};
