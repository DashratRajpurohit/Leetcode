class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int temp=0;
        for(int ch:gain){
            if(temp+ch>max)max = temp+ch;
            temp +=ch;
        }
        return max;

    }
};