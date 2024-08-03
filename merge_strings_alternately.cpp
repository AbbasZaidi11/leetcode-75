class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        bool flag=true;
        int i=0;
        int j=0;
        while(i<word1.size() && j<word2.size()){
            if(flag){
                ans.push_back(word1[i]);
                i++;
                flag=!flag;
            }else{
                ans.push_back(word2[j]);
                j++;
                flag=!flag;
            }
        }
        while(i<word1.size()){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<word2.size()){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};
