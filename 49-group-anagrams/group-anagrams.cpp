class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>freq;
        for(string word:strs){
            string temp=word;
            sort(temp.begin(),temp.end());
            freq[temp].push_back(word);
        }
        vector<vector<string>>arr;
        for(auto& it:freq){
            arr.push_back(it.second);
        }
        return arr;
    }
};