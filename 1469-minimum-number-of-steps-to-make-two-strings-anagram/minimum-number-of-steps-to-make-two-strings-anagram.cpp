class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:t){
                mp[i]--;
        }
        int res = 0;
        for(const auto&it:mp){
            int x = it.second;
            if(x>0){
                res += x;
            }
        }
        return res;
    }
};

//what has happended to me can't even solve this easy ques.