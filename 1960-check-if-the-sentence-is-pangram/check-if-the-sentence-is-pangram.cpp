class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        int count=0;
        for(int i=0;i<sentence.size()-1;i++){
            if(sentence[i]!=sentence[i+1])count++;
        }
        return (count+1==26);
    }
};