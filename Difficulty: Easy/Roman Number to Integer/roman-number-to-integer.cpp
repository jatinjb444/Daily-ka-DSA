class Solution {
  public:
  int val(char r){
      if(r == 'I') return 1;
      if(r == 'V') return 5;
      if(r == 'X') return 10;
      if(r == 'L') return 50;
      if(r == 'C') return 100;
      if(r == 'D') return 500;
      if(r == 'M') return 1000;
  }
    int romanToDecimal(string &s) {
        // code here
        int res = 0;
        for(int i = 0 ; i < s.size(); i++ ){
            
            int s1val = val(s[i]);
            
            if(i + 1 < s.size()){
                int s2val = val(s[i + 1]);
                
                if(s1val < s2val){
                
                res += s2val - s1val;
                i++;
            }
            else {
                res += s1val;
            }
            }
            else{
                
               res += s1val;
            
        }
        }
        return res;
    }
};