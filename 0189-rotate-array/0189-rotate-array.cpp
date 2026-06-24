class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        reverse(nums.begin() , nums.end());   // arr reverse og

        reverse(nums.begin() , nums.begin()+k); // reversing with starting with K

        reverse(nums.begin()+k , nums.end()); // arr position going to last
        
    }
};