class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n==0)return 0;
        string str = to_string(n);
        string res="";
        long long int sum=0;
        for(char c:str){
            if(c!='0'){
                res+=c;
                sum+=(c-48);
            }
        }
        return stoi(res)*sum;
    }
};