class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> arr;
        int longest = 0;

        for (char c : s) {
            auto it = find(arr.begin(), arr.end(), c);

            if (it != arr.end()) {
                arr.erase(arr.begin(), it + 1);
            }

            arr.push_back(c);
            longest = max(longest, (int)arr.size());
        }

        return longest;
    }
};