class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int cnt = 0;
        for(char ch : s){
            if(ch=='('){
                if(cnt==0){
                    cnt++;
                }
                else{
                    res += '(';
                    cnt++;
                }
            }
            else if(cnt>=2){
                res += ')';
                cnt--;
            }
            else{
                cnt--;
            }
        }
        return res;
        
    }
};