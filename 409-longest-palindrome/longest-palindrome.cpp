class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int>mp;
       for(auto it:s){
        mp[it]++;
       }
       bool flag1 = false, flag2 = false;
       int cnt = 0;
       for(auto it = mp.begin();it!=mp.end();it++){
        int x = it->second;
        if(x==1){
            flag1 = true;
        }
        if(x%2==0){
            cnt += x;
        }
        else if(x>2 && x%2!=0){
            flag2 = true;
            cnt += x-1;
        }
        
       }
       if(flag1 || flag2){
        return cnt + 1;
       }
       return cnt;
    }
};