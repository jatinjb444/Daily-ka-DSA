class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int n2 = s.size() , n1 = g.size();
        int l = 0 , r = 0;
        int cnt = 0;
        while(l < n1 && r < n2){
            if(g[l] <= s[r]) {
                cnt++;
               if(l < n1) l++;
               if(r < n2) r++;
            }
            else if(r < n2) r++;
        }
        return cnt;
    }
};