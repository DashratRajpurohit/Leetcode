class Solution {
public:
    bool check(char ch, int count, vector<string>& words) {
        auto it = find(words[count].begin(), words[count].end(), ch);

        if (it == words[count].end())
            return false;

        words[count].erase(it);

        if (count == 1)
            return true;

        return check(ch, count - 1, words);
    }

    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;

        for (char c : words[0]) {
            if (words.size() == 1) {
                ans.push_back(string(1, c));
                continue;
            }

            if (check(c, words.size() - 1, words))
                ans.push_back(string(1, c));
        }

        return ans;
    }
};