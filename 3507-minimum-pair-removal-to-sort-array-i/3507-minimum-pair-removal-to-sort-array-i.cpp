class Solution {
public:int count = 0;
    int minimumPairRemoval(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end()))return count;
        int min = INT_MAX,j=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+nums[i+1]<min){
                min  = nums[i]+nums[i+1];
                j=i;
            }
        }
        nums[j]=min;
        nums.erase(nums.begin() + j+1);
        count++;
        return minimumPairRemoval(nums);
    }
};