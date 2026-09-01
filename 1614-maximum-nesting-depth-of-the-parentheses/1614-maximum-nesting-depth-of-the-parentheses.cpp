class Solution {
public:
    int maxDepth(string s) {
        int max=0,count=0;
        for(char c:s){
            if(c=='('){
                count++;
                if(count>max)max=count;
            }
            else if(c==')')count--;
            else continue;
        }
        return max;
    }
};