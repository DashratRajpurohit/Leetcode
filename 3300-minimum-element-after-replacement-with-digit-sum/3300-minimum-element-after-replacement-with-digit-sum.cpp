class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=INT_MAX;
        for(int c:nums){
            int sum=0;
            while(c>0){
                sum += c%10;
                c/=10;
            }
            if(sum<min)min=sum;
        }
        return min;
    }
};