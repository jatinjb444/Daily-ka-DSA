class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        //comeceptual hai dekha na ho to ek baar m krna mushkil 6   v
        int n = mat.size();
        int m = mat[0].size();
        int desired = ( n * m + 1) / 2;
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
                
                
                if(place < desired){
                    lo = mid + 1;
                }else{
                    hi = mid;
                }
        }
        return lo;
    }
};
