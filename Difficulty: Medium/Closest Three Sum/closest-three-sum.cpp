// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin() , arr.end());
        int ans = arr[0] + arr[1] + arr[2];
        for(int i = 0 ; i < n-2 ; i++){
            int l = i + 1 , r = n - 1;
            while(l < r){
            int sum = arr[i] + arr[l] + arr[r];
            if(abs(sum - target) < abs(ans - target)){
                ans = sum;
            }
            if(abs(ans-target) == abs(sum - target)){
                ans = max(ans , sum);
            }
            if(sum == target) {
              return sum;
            }
            else if (sum < target){
                l++;
            }else{
                r--;
            }
        }
        }
        return ans;
    }
};
