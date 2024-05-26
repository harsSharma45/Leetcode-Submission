class Solution {
public:
    bool isInt(char ch){
        if(ch>=48 && ch<=57){
            return true;
        }
        return false;
    }
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int sign = 1;
        long long res = 0;
        while(i<n && s[i]== ' '){
            i++;
        }
        if(s[i] == '-' || s[i] == '+'){
            sign = (s[i++]=='-')? -1:1;
        }
        while(i<n && isInt(s[i])){
            res = res*10 + (s[i++]-'0');

            if(res*sign > INT_MAX) return INT_MAX;
            if(res*sign < INT_MIN) return INT_MIN;
        }
        if(res == 0 && !isInt(s[i])) return 0;
        return res*sign;
    }
};