class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            unordered_set <int> freq1;
            unordered_set <int> freq2;
            for(int j=0;j<matrix.size();j++){
                if(freq1.count(matrix[i][j])){
                    return false;
                }
                if(freq2.count(matrix[j][i])){
                    return false;
                }
                freq1.insert(matrix[i][j]);
                freq2.insert(matrix[j][i]);
            }

        }
        return true;
    }
};