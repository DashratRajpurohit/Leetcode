class Solution {
public:
    int i=0;
    string temp = "";
    string processStr(string s) {
        if(i==s.size())return temp;
        if(s[i]=='*' && !temp.empty())temp.pop_back();
        else if(s[i]=='#' && !temp.empty() )temp+=temp;
        else if(s[i]=='%' && temp.size()>1)reverse(temp.begin(), temp.end());
        else if (s[i]=='*'||s[i]=='#'||s[i]=='%');
        else temp+=s[i];
        i++;
        return processStr(s);
    }
};