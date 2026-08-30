class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans;

        for (int i = 0; i < n1; i++) 
        {

            int pos = -1;

            
            for (int j = 0; j < n2; j++)
            {

                if (nums1[i] == nums2[j]) 
                {
                    pos = j;
                    break;
                }
            }

            int greater = -1;

            
            for (int j = pos + 1; j < n2; j++) 
            {

                if (nums2[j] > nums1[i]) 
                {
                    greater = nums2[j];
                    break;
                }
            }

            ans.push_back(greater);
        }

        return ans;
    }
};