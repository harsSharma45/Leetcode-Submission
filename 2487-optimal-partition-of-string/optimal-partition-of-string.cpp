class Solution {
public:
    int partitionString(string s) {
        set<char>sh;
        int ans = 1;
        for(int i = 0; i < s.length(); i++){
            if(sh.find(s[i])!=sh.end()){
                 ans++;
                 sh.clear();
            }
            sh.insert(s[i]);
        }

        return ans;
    }
};