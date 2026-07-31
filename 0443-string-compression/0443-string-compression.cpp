class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int count = 1;

        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == chars[i - 1]) {
                count++;
            } else {
                ans.push_back(chars[i - 1]);

                if (count > 1) {
                    string s = to_string(count);
                    for (char c : s)
                        ans.push_back(c);
                }

                count = 1;
            }
        }

        ans.push_back(chars.back());
        if (count > 1) {
            string s = to_string(count);
            for (char c : s)
                ans.push_back(c);
        }

        chars = ans;
        return chars.size();
    }
};