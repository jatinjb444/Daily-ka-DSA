class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        if(k == (n * m)) return mat[n - 1][m - 1]; //base case ek
        int minVal= INT_MAX , maxVal = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(mat[i][0] < minVal) minVal = mat[i][0];
            if(mat[i][m - 1] > maxVal) maxVal = mat[i][m-1];
        }
        int lo = minVal , hi = maxVal;
        while( lo < hi){
            int mid = lo + ( hi - lo) / 2;
            int place = 0;
            
            for(int i = 0 ; i < n ; i++)
                place += upper_bound(mat[i].begin() , mat[i].end() , mid ) 
                - mat[i].begin();
            
                if(place < k){
                    lo = mid + 1;
                }else{
                    hi = mid;
                }
        }
        return lo;
    }
};