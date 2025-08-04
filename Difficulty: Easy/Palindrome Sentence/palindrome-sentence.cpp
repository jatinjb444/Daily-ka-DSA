class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
             string newS = "";
        for(char &c : s){
            if(isalnum(c)){
                newS += tolower(c);
            }
        }
        int l = 0 , r = newS.size() - 1;
        while(l <= r){
            if(newS[l++] != newS[r--]) return false;
        }
        return true;
    }
};