class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
    // Your code here
    int n = arr.size();
    vector<int> left(n), right(n);
    stack<int> s , s2;
    for(int i = 0; i < arr.size(); i++){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
       for(int i = n-1; i >= 0 ; i--){
        while(!s2.empty() && arr[s2.top()] >= arr[i]){
            s2.pop();
        }
        right[i] = s2.empty() ? n : s2.top();
        s2.push(i);
    }
    vector<int> width(n);
    int maxi = 0;
    for(int i = 0 ; i < n; i++){
        width[i] = right[i] - left[i] - 1;
    }
     for(int i = 0 ; i < n; i++){
        arr[i] = width[i] * arr[i];
    }
    return *max_element(arr.begin() , arr.end());
    }
};
