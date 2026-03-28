class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int c:nums){
            sum1+=c;
            if(c>9){
                while(c!=0){
                    sum2+=c%10;
                    c=c/10;
                }
                continue;
            }
            sum2+=c;
        }
        return abs(sum1-sum2);
    }
};