class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            string s1=s;
            reverse(s1.begin(), s1.end());
            if(s1==s)return s;
        }
        return "";
    }
};