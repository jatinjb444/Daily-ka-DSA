class Solution {
  public:
  int solve(vector<vector<int>>& mat , int i , int j ,  vector<vector<int>>& dp ){
       int n = mat.size() , m = mat[0].size();
       //baase
       if(i >= n || i < 0 || j >= m || j < 0) return 0;
       if(dp[i][j] != -1) return dp[i][j];
       //recurse
       int dir1 = solve(mat , i-1 , j+1 , dp);
       int dir2 = solve(mat , i , j + 1 , dp);
       int dir3 = solve(mat , i+1 , j + 1 , dp);
       
       return dp[i][j] = mat[i][j] +  max({dir1 , dir2 , dir3});
  }
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int n = mat.size() , m = mat[0].size();
        int ans = 0;
        vector<vector<int>> dp(n , vector<int>(m , -1));
        for(int i = 0 ; i < n ; i++){
            ans =  max(ans , solve(mat , i, 0 , dp));
        }
        return ans;
    }
};