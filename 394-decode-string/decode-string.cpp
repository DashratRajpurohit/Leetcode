class Solution {
public:
    string decodeString(string s) {
        stack<string> st1;
        stack<int> st2;
        string str = "";
        int k=0;
        for(char c:s){
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            }
            else if(c=='['){
                st1.push(str);
                st2.push(k);
                str="";
                k=0;
            }
            else if(c==']'){
                string temp = str;

                str = st1.top();
                st1.pop();

                int count = st2.top();
                st2.pop();

                while(count--){
                    str+=temp;
                }
            }
            else{
                str+=c;
            }
        }
        return str;
    }
};