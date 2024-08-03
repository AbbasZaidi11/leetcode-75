class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        if(str1==str2){return str1;}
        string ans="";
        //find the gcd of n and m and then find if they are equal
        int mini=min(n,m);
        while(mini){
            if(n%mini==0 && m%mini==0){
                break;
            }
            mini--;
        }
        for(int i{0};i<mini;i++){
            if(str1[i]==str2[i]){
                ans.push_back(str1[i]);
            }else{
                return "";
            }
        }
        string maker="";
        int multiple=n/mini;
        for(int i{0};i<multiple;i++){
            maker=maker+ans;
        }
        if(maker!=str1){return "";}
       

        int multiple2=m/mini;
        string maker2="";
        for(int i{0};i<multiple2;i++){
            maker2=maker2+ans;
        }
        if(maker2!=str2){return "";}
        if(maker2==str2 && maker==str1){
            return ans;
        }
        return "";

    }
};
