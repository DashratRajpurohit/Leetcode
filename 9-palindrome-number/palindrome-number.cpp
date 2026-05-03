class Solution {
public:
    bool isPalindrome(int x) {
        int i=x;
        double sum=0;
        while(i>0){
            int digite=i%10;
            sum = sum*10+digite;
            i/=10;
        }
        return (sum==x);
    }
};