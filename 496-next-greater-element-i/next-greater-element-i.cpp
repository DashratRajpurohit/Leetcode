class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        for(int i=0;i<nums1.size();i++) {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);

            int nge = -1;

            for(int j = (it - nums2.begin()) + 1; j < nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
                    nge = nums2[j];
                    break;
                }
            }

           nums1[i]=nge;
        }

        return nums1;
    }
};