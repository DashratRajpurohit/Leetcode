class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;    
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>9){
                while(nums[i]>0){
                    arr.insert(arr.begin(), nums[i]%10);
                    nums[i]/=10;
                }
            }
            else arr.insert(arr.begin(), nums[i]);
        }
        return arr;
    }
};