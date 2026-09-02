class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int days = n % 7;

        
        int sum = weeks * 28 + 7 * weeks * (weeks - 1) / 2;

        
        for (int i = 1; i <= days; i++) {
            sum += weeks + i;
        }

        return sum;
    }
};