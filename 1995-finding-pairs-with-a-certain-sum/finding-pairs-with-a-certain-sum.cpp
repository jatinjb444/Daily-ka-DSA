class FindSumPairs {
public:
vector<int> vec1;
vector<int> vec2;
unordered_map<int , int> mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vec1 = nums1;
        vec2 = nums2;
        for(int &x : vec2){
            mp[x]++;
        }
    }
    void add(int index, int val) {
        mp[vec2[index]]--;
        vec2[index] +=  val; 
        mp[vec2[index]]++;
        //o(1) operaation
    }
    int count(int tot) {
        int c = 0; //count
        for(int i = 0 ; i < vec1.size(); i++){
            int rem = tot - vec1[i];
            if(mp.find(rem) != mp.end())  c += mp[rem];
        }
        return c;
    }
};
/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */