class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& r) {
        vector<int> d(n,0);
        for(auto& x:r)++d[x[0]],++d[x[1]];
        sort(d.begin(),d.end());
        long long res=0;
        for(int i=0;i<n;++i)res+=1LL*d[i]*(i+1);
        return res;
    }
};