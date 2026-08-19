class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        char max ='0';
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(num[i]>=max){
                    res = "";
                    max =num[i];
                    res+=num[i];
                    res+=num[i+1];
                    res+=num[i+2];
                }
            }
        }
        return res;
    }
};