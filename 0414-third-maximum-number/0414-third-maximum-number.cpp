class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max = LONG_MIN;
        long smax = LONG_MIN;
        long tmax = LONG_MIN;

        for (int num : nums) {

            if (num == max || num == smax || num == tmax)
                continue;

            if (num > max) {
                tmax = smax;
                smax = max;
                max = num;
            }
            else if (num > smax) {
                tmax = smax;
                smax = num;
            }
            else if (num > tmax) {
                tmax = num;
            }
        }

        if (tmax == LONG_MIN)
            return max;

        return tmax;
    }
};