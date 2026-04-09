class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if((tolower(s[i])>='a'&&tolower(s[i])<='z')&&(tolower(s[j])>='a'&&tolower(s[j]) <='z')){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!(tolower(s[i])>='a'&&tolower(s[i])<='z')){
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};