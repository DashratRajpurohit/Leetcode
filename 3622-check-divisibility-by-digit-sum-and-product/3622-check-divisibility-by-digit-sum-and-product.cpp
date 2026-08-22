class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0,pro =1,i=n;
        while(i>0){
            int diget = i%10;
            sum+=diget;
            pro*=diget;
            i/=10;
        }
        return (n%(sum+pro)==0)?true:false;
    }
};