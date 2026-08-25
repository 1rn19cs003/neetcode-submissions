class Solution {
public:
    string sanitise(string s){
        string new_s="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i]))new_s+=s[i];
            else continue;
        }
        cout<<new_s<<endl;
        return new_s;
    }
    bool isPalindrome(string s) {
        string newStr=sanitise(s);
        int len=newStr.size();
        int size=0;
        if(len%2==0) size=len/2;
        else size=len/2+1;
        for(int i=0;i<size;i++){
            // cout<<newStr[i]<<" "<<newStr[len]<<endl;
            if(tolower(newStr[i])==tolower(newStr[--len]))continue;
            else return false;
        }
        return true;
    }
};
