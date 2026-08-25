class Solution {
public:

    bool isMatch(string s, string p) {

        int i = 0;
        int j = 0;

        int star = -1;
        int starMatch = -1;

        while (i < s.size()) {

            // Normal character or '?'
            if (j < p.size() &&
                (p[j] == '?' || p[j] == s[i])) {

                i++;
                j++;
            }

            // '*'
            else if (j < p.size() && p[j] == '*') {

                star = j;
                starMatch = i;

                j++;
            }

            // Mismatch -> go back to '*'
            else if (star != -1) {

                j = star + 1;

                starMatch++;
                i = starMatch;
            }

            // No '*' available to backtrack
            else {
                return false;
            }
        }

        // Remaining pattern must consist only of '*'
        while (j < p.size() && p[j] == '*') {
            j++;
        }

        return j == p.size();
    }
};