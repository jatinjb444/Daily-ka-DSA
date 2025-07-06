class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n);
        // st.push(arr[n - 1]);
        for(int i = 2 * n - 1; i >= 0; i--){
            int idx = i % n;
            while(!st.empty() && st.top() <= arr[idx]){
                st.pop();
            }
            if(i < n){
            ans[idx] = st.empty() ? -1 : st.top();
        }
        st.push(arr[idx]);
        }
        return ans;
    }
};