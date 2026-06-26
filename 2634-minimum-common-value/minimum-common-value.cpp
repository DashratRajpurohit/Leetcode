class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int c:nums1){
            if(c<nums2[0])continue;
            auto it = find(nums2.begin(), nums2.end(), c);

            if (it != nums2.end()) {
                return c;
            }
        }
        return -1;
    }
};