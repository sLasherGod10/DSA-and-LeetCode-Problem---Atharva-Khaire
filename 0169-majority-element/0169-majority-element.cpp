class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int>mp;

        for( int x : nums){
            mp[x]++;
        }

        int sum = 0;

        for(auto p : mp){
            if(p.second > nums.size()/2){
                sum+= p.first;
            }
        }
        return sum;
    }
};