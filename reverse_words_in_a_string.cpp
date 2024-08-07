class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        while(j<n){
            if(s[j]==' '){
                j++;
                continue;
            }else{
                i=j;
                string temp="";
                while(i<n && s[i]!=' '){
                    temp.push_back(s[i]);
                    i++;
                }
                reverse(temp.begin(),temp.end());
                if(ans.size()==0){
                    ans=temp;
                }else{
                    ans=ans+" "+temp;
                }
            
                j=i;
            }
        }
        return ans;
    }
};
