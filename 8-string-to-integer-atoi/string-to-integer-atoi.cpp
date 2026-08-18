class Solution {
public:
    int myAtoi(string s) {

        int ans = 0;
        int sign = 1;
        int i = 0;

        while(i < s.length() && s[i] == ' ') {
            i++;
        }

        if(i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < s.length() && s[i] == '+') {
            i++;
        }

        for(; i < s.length(); i++) {

            if(s[i] >= '0' && s[i] <= '9') {

                int digit = s[i] - '0';

                if(ans > (INT_MAX - digit) / 10) {

                    if(sign == 1)
                        return INT_MAX;
                    else
                        return INT_MIN;
                }

                ans = ans * 10 + digit;
            }
            else {
                break;
            }
        }

        return ans * sign;
    }
};