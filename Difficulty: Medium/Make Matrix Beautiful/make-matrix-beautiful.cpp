class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int ops = 0;
        int maxSum = 0;
        for(int i = 0 ; i < mat.size(); i++){
            int sum = 0;
            for(int j = 0;j < mat[0].size(); j++){
                sum += mat[i][j];
            }
             maxSum = max(maxSum , sum);
        }
         for(int j = 0 ; j < mat.size(); j++){
            int sum = 0;
            for(int i = 0; i< mat[0].size(); i++){
                sum += mat[i][j];
            }
             maxSum = max(maxSum , sum);
        }
         for(int i = 0 ; i < mat.size(); i++){
            int rowSum = 0;
            for(int j = 0;j < mat[0].size(); j++){
                rowSum += mat[i][j];
            }
            ops += maxSum - rowSum;
        }
        return ops;
    }
};