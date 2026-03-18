class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int>arr;
        int size=0;
        for(int i=0;i<nums1.size();i++){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if (it != nums2.end()) {
                s.insert(nums1[i]);
                if(s.size()!=size){
                    arr.push_back(nums1[i]);
                    size = s.size();
                }
            }
            
        }
        return arr;
    }
};