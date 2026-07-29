class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count = 0; 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                nums.erase(nums.begin() + i);
                nums.insert(nums.begin()+count,1);
            }
            else if(nums[i]==0){
                nums.erase(nums.begin() + i);
                nums.insert(nums.begin(), 0);
                count++;
            }
        }
        return;
    }
};