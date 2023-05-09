class Solution {
public:
    bool isMatch(string s, string p) {
        int n1=s.size();
        int n2=p.size();
        int a=0;
        for(int i=0;i<n2;i++){
            if(p[i]=='*' && a==isalpha(p[i+1])){
                return true;
            }
        }
        for(int i=0;i<n1;i++){
            if(s[i]==p[i] || p[i]=='?'){
                continue;
            }
            else{
                return false;
            }   
        }
        return true;
    }
};
