class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int res = 0,cnt = 0;
        map<int,int>mp;
        for(int x:nums){
            if(x%2==0){
                mp[x]++;
            }
        }
        if(mp.size()==0){
            return -1;
        }
        for(auto it:mp){
            int x = it.first;
            int y = it.second;
            if(y>cnt){
                cnt = y;
                res = x;
            }
            else if(y==cnt){
                res = min(res,x);
            }
        }
    return res;
    }
};