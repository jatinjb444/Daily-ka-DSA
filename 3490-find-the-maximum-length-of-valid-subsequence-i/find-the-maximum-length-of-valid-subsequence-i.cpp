class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int cntEven = 0 , cntOdd = 0;
        for(int &num : nums){
            if(num % 2 == 0){
                cntEven++;
            }
            else {
                cntOdd++;
            }
        }

        int parity = nums[0] % 2; // pehli parity milgi
        int alternating = 1;
        for(int i = 1; i < nums.size() ; i++){
            int currParity = nums[i] % 2; // current milgi alternating chaiye
            if(currParity != parity){
                alternating++;
                parity = currParity;
            }
        }
        return max({cntEven , cntOdd , alternating});
    }
};