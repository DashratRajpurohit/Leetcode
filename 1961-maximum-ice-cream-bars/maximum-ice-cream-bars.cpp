class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum =0,count=0;
        for(int c:costs){
            if(sum+c<=coins){
                sum+=c;
                count++;
            }
        }
        return count;
    }
};