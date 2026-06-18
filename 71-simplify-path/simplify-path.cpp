class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
       
        string temp;
       for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {

                if (temp == "" || temp == ".") {
                                  
                }
                else if (temp == "..") {
                    if (!st.empty())
                        st.pop();
                }
                else {
                    st.push(temp);
                }

                temp = "";
            }
            else {
                temp += path[i];
            }
        }

        vector<string> ans2;

        while (!st.empty()) {
           ans2.push_back(st.top());
            st.pop();
        }

        string ans;

        for (int i = ans2.size() - 1; i >= 0; i--) {
            ans += "/" + ans2[i];
        }

        return ans.empty() ? "/" : ans;
    }
};