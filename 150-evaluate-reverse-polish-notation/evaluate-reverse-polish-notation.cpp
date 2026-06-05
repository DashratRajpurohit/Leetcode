class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int a,b;
        for(string c:tokens){
            if(c=="+"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b+a);
            }
            else if(c=="-"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b-a);
            }
            else if(c=="*"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b*a);
            }
            else if(c=="/"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b/a);
            }
            else st.push(stoi(c));
        }
        return st.top();
    }
};