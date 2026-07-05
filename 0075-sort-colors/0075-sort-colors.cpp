class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count1, count2, count3;

        for(int x : nums){
            if( x == 0)
                count1.push_back(x);
            else if ( x == 1)
                count2.push_back(x);
            else 
                count3.push_back(x);
        }
        nums.clear();

        nums.insert(nums.end() , count1.begin() , count1.end());
        nums.insert(nums.end() , count2.begin() , count2.end());
        nums.insert(nums.end() , count3.begin() , count3.end());
        
    }
};