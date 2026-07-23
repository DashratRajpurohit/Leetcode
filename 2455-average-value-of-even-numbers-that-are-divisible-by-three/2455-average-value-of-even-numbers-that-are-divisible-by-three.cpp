class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0,count=0;
        for(int n:nums){
            if(n%2==0 && n%3==0){
                sum+=n;
                count++;
            }
        }
        
        return (count==0)?0:sum/count;
    }
};