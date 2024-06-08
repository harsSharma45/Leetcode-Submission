class Solution {
public:
    bool isFascinating(int n) {
        int x = n*2;
        int y = n*3;
        string str= "";
        str += to_string(n);
        str += to_string(x);
        str += to_string(y);
        sort(str.begin(),str.end());
        for(int i = 0; i < str.size(); i++){
            if(str[i]=='0') return false;
        }
        map<char,int>mp;
        for(auto it:str){
            mp[it]++;
        }
        if(mp.size()!=9){
            return false;
        }
        for(auto it:mp){
            int x = it.second;
            if(x!=1){
                return false;
            }
        }
        return true;
    }
};