class Solution {
  public:
     int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        queue<pair<pair<int,int> , int>> q;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vec(n , vector<int> (m , -1));
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j]==2){
                    vec[i][j] = 2;
                    q.push({{i , j} , 0});
                }
            }
        }
        //now the login comes in and stikes here....
        int tm = 0;
        int drow[] = {0 , 1 , -1 , 0};
        int dcol[] = {1 , 0 ,0 , -1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(tm , t); // everytime new is popped out ...........
            q.pop();
            for(int i = 0 ; i < 4; i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
            mat[nrow][ncol] == 1 && vec[nrow][ncol] == -1){
                q.push({{nrow , ncol} , t + 1});
                vec[nrow][ncol] = 2;
            }
        }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(vec[i][j] == -1 && mat[i][j] == 1 ){
                    return -1;
                }
            }
        }
        return tm;
    }
};