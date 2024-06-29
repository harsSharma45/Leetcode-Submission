class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>res;
        vector<pair<int,vector<int>>>vp;
        for(auto &it:points){
            int x = it[0];
            int y = it[1];
            int dist = x*x + y*y;
            vp.emplace_back(dist,it);
        }
        sort(vp.begin(),vp.end());
        for(int i = 0; i < k; i++){
            res.push_back(vp[i].second);
        }
        return res;
        
    }
};