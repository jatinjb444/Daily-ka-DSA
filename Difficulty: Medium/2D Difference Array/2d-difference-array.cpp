class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> diff(n + 1 , vector<int>(m + 1 , 0));
        for(int i = 0 ; i < opr.size(); i++){
            int v = opr[i][0];
            int r1 = opr[i][1], c1 = opr[i][2], r2 = opr[i][3], c2 = opr[i][4];
            diff[r1][c1] += v;
          if (c2 + 1 <= m) diff[r1][c2 + 1] -= v;
if (r2 + 1 <= n) diff[r2 + 1][c1] -= v;
if (r2 + 1 <= n && c2 + 1 <= m) diff[r2 + 1][c2 + 1] += v;

        }
        // prefix sum of row 
        for(int i = 0 ; i < diff.size(); i++){
            for(int j = 1 ; j < diff[0].size(); j++){
                diff[i][j] += diff[i][j- 1];
            }
        }
           for(int j = 0 ; j < diff[0].size(); j++){
            for(int i = 1 ; i < diff.size(); i++){
                diff[i][j] += diff[i - 1][j];
            }
            }
            
            //last complie all
            for(int i = 0 ; i < mat.size(); i++){
                for(int j = 0 ; j < mat[0].size(); j++){
                    mat[i][j] = mat[i][j] + diff[i][j];
                }
            }
            return mat;
}
};