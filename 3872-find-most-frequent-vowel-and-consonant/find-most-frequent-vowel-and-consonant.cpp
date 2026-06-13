class Solution {
public:
    int maxFreqSum(string s) {
        sort(s.begin(), s.end());

        int maxv = 0, maxc = 0;
        int count = 1;

        for (int i = 1; i <= s.size(); i++) {
            if (i < s.size() && s[i] == s[i - 1]) {
                count++;
            } else {
                char ch = s[i - 1];

                if (ch == 'a' || ch == 'e' || ch == 'i' ||
                    ch == 'o' || ch == 'u') {
                    maxv = max(maxv, count);
                } else {
                    maxc = max(maxc, count);
                }

                count = 1;
            }
        }

        return maxv + maxc;
    }
};