class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        string vowels="";
        for(int i{0};i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                vowels.push_back(s[i]);
            }
        }
        reverse(vowels.begin(),vowels.end());
        int indi=0;
        for(int i{0};i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                s[i]=vowels[indi];
                indi++;
            }
        }
        return s;
    }
};
