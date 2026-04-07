class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> fr;
         for(int c:nums){
            fr[c]++;
            if(fr[c]>nums.size()/2){
                return c;
            }
         }
         return -1;
          
    }
};