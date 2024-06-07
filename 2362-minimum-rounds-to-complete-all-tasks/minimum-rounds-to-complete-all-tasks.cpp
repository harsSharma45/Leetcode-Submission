class Solution {
public:
    int func(int n){
        int res = 0;
        if(n%3==0){
            while(n>0){
                res += n/3;
                n/=3;
            }
            return res;
        }
        else{
            while(n%3!=0 || n>0){
                 n -= 2;
                 res++;
            }
            
        }
        return res;
    }
    int minimumRounds(vector<int>& tasks) {
        int res = 0;
        map<int,int>mp;
        for(int it : tasks){
            mp[it]++;
        }
        vector<int>temp;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            if(it->second==1){
                return -1;
            }
            else{
                temp.push_back(it->second);
            }
        }
        for(int i = 0; i < temp.size(); i++){
            res += (temp[i]+2)/3;
        }
    return res;
    }
};