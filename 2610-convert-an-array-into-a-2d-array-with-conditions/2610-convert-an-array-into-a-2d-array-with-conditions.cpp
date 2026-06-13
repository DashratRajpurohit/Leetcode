class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int>freq;
        for(int i:nums){
            if(freq[i]==ans.size()){
                ans.push_back({});
            }
            ans[freq[i]].push_back(i);
            freq[i]++;
        }
        return ans;
    }
};