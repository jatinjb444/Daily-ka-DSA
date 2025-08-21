class Solution {
  public:
  int recursive(int n){
      if(n == 0 || n == 1) return 1;
      return n * recursive(n - 1);
  }
    void factorial(int n) {
        // code here
        cout << recursive(n) << endl;
    }
};