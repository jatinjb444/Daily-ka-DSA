// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int xorr = 0;
        for(int i = 0 ; i < n; i++){
            xorr = xorr ^ arr[i];
        }
        return xorr;
    }
};