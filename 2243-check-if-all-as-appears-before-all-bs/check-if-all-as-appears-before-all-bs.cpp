class Solution {
public:
    bool checkString(string s) {
        int acnt = 0, bcnt = 0;
        bool flag = true;
        for(int i = 0 ; i < s.length(); i++){
            if(flag == false){
                if(acnt == 0){
                    return false;
                }
            }
            if(bcnt>0 && acnt>0){
                return false;
            }
            if(s[i]=='a'){
                acnt++;
            }
            else if(s[i]=='b'){
                bcnt++;
                acnt = -1;
                flag = false;
            }
        }
        if(flag == false){
                if(acnt == 0){
                    return false;
                }
            }
        return true;
    }
};