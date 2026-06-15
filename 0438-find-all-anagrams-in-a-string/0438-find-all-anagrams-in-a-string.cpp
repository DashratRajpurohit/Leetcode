class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        vector<int> fp(26, 0);
        vector<int> fs(26, 0);

        for (char c : p)
            fp[c - 'a']++;

        for (int i = 0; i < m; i++)
            fs[s[i] - 'a']++;

        if (fp == fs)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            fs[s[i] - 'a']++;
            fs[s[i - m] - 'a']--;

            if (fp == fs)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};