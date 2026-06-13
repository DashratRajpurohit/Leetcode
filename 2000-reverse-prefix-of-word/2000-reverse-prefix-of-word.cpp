class Solution {
public:
    string check(int n, string word) {
        string st;

        for (int i = n; i >= 0; i--) {
            st += word[i];
        }

        for (int j = n + 1; j < word.size(); j++) {
            st += word[j];
        }

        return st;
    }

    string reversePrefix(string word, char ch) {
        auto it = find(word.begin(), word.end(), ch);

        if (it != word.end()) {
            int n = it - word.begin();
            return check(n, word);
        }

        return word;
    }
};