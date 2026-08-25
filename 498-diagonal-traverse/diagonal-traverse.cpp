class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>arr;
        for(auto c:mp){
            if(c.first%2==0){
                for(int i=c.second.size()-1;i>=0;i--)
                    arr.push_back(c.second[i]);
            }
            else{
                for(auto ch:c.second)
                    arr.push_back(ch);
            }
        }
        return arr;
    }
};