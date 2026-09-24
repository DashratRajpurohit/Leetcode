class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9){
                int n=nums[i],sum=0;
                while(n>0){
                    int digit = n%10;
                    sum+=digit;
                    n/=10;
                }
                if(i==sum)return i;
                continue;
            }
            if(i==nums[i])return i;
        }
        return -1;
    }
};