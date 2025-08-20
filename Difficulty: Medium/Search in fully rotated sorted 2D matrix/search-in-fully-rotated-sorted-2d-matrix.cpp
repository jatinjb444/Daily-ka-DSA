class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        if(mat.empty() || mat[0].empty()) return false;
        int n = mat.size();
        int m = mat[0].size();
        int l = 0 , r = n * m - 1;
        while(l <= r){
            int mid = l +  (r - l) / 2;
            
            int row = mid / m;
            int col = mid % m;
            if(mat[row][col] == x) return true;
            
           int lval = mat[l / m][l % m];
           int rval = mat[r / m][r % m];
           
           if(lval <= mat[row][col]){
               if(x >= lval && x < mat[row][col]){
                   r = mid - 1;
               }else{
                   l = mid + 1;
               }
           }
           else {
               if(x <= rval && x > mat[row][col]){
                   l = mid + 1;
               }else {
                   r = mid - 1;
               }
           }
            
        }
        return false;
    }
};
