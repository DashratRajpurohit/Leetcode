class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int count=1,sum=0;
        for(int i=cost.size()-1;i>=0;i--){
            if(count%3!=0){
                sum+=cost[i];
            }
            count++;
        }
        return sum;
    }
};