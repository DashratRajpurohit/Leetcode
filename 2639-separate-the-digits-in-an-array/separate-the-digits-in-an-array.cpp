class Solution {
public:
    vector<int>arr;
    int check(int c){
        while(c>0){
            arr.insert(arr.begin(), c%10);
            c/=10;
        }
        return c;
    }
    vector<int> separateDigits(vector<int>& nums) {
        
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>9){
                check(nums[i]);
            }
            else arr.insert(arr.begin(), nums[i]);
        }
        return arr;
    }
};