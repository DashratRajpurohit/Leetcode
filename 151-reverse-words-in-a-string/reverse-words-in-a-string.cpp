class Solution {
public:
    string reverseWords(string s) {
       vector<string>arr;
       string s1;
       for(char c:s){
        if(c==' '){
            if(!s1.empty()){
                arr.push_back(s1);
                s1.clear();
            }
        }
        else{
            s1+=c;
        }
       }
       if(!s1.empty())arr.push_back(s1);
       s1.clear();
       for(int i=arr.size()-1;i>=0;i--){
        s1+=arr[i];
        if(i!=0)s1+=' ';
        
       }
       return s1;
    }
};