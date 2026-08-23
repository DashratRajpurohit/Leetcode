class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int min =INT_MAX;
        for(vector c:tasks){
            if(min>c[0]+c[1])min=c[0]+c[1];
        }
        return min;
    }
};