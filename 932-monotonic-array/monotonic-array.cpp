class Solution {
public:
    bool inc(vector<int>arrI){
        vector<int> arr = arrI;
        sort(arr.begin(),arr.end());
        if(arr==arrI)return true;
        else return false;
    }
    bool dec(vector<int>arrD){
        vector<int> arr = arrD;
        sort(arr.begin(), arr.end(), greater<int>());
        if(arr==arrD)return true;
        else return false;
    }
    bool isMonotonic(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1]){
            if(inc(nums))return true;
        }
        else {
            if(dec(nums))return true;
        }
        return false;
    }
};