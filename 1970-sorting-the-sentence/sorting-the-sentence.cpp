class Solution {
public:
    string sortSentence(string s) {
        vector<string>arr(10);
        string temp;
        for(char ch:s){
            if(ch >= '1' && ch <= '9'){
                arr[ch-'1'] = temp;
                temp.clear();
                continue;
            }
            else if(ch==' ')continue;
            temp+=ch;
        }
         for(int i=0;i<arr.size();i++){
            if(arr[i].size()==0)break;
            if(i!=0)temp+=' ';
            temp+=arr[i];
        }
        return temp;
    }
};