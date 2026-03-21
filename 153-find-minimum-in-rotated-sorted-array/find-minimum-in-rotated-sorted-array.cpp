class Solution {
public:
    int findMin(vector<int>& nums) {
        int min =INT_MAX;
        for(int c:nums){
            if(min>c)min = c;
        }
        return min;
    }
};