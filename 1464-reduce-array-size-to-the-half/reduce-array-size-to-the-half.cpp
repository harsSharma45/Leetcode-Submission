class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<pair<int,int>>vp(mp.begin(),mp.end());
        // for(auto it:mp){
        //     vp.push_back(make_pair(it.first,it.second));
        // }
        sort(vp.begin(),vp.end(),[](const pair<int,int>&a, const pair<int,int>&b){
            return a.second>b.second;
        });
        int toremove = 0,removecnt = 0;
        int halfsize = arr.size()/2;
        for(const auto& it:vp){
            removecnt += it.second;
            toremove++;
            if(removecnt>=halfsize){
                break;
            }
        }
        return toremove;
    }
};