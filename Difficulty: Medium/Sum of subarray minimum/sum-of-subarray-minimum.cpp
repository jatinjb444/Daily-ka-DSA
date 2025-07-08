class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        stack<pair<int , int>> s1 , s2;
        vector<int> left(n ) , right(n);
        //for the left greater firstloop
        for(int i = 0; i < n ; i++){
            while(!s1.empty() && s1.top().first > arr[i]){
                s1.pop();
            }
            left[i] = s1.empty() ? i+1 : i - s1.top().second; 
            s1.push({arr[i] , i});
        }
        
        //for the right grtr
         for(int i = n-1; i >=0 ; i--){
            while(!s2.empty() && s2.top().first >= arr[i]){
                s2.pop();
            }
            right[i] = s2.empty() ? n-i : s2.top().second - i; 
            s2.push({arr[i] , i});
        }
        
        //now the final ans
       int ans = 0;
        for(int i = 0 ; i < n; i++){
           ans +=  arr[i] * left[i] * right[i];
        }
        return ans;
    }
};