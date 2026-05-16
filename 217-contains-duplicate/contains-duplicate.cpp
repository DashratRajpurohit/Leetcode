class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int ch:nums){
            st.insert(ch);
        }
        return (st.size()==nums.size())?false:true;    }
};