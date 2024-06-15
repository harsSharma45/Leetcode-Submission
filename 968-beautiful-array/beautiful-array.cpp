class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>res;
        if(n==1) return {1};
        vector<int>v1 = beautifulArray((n+1)/2);
        
        for(int i = 0; i < v1.size(); i++){
            res.push_back(2*v1[i] - 1);
        }
        vector<int>v2 = beautifulArray(n/2);
        for(int i = 0; i < v2.size(); i++){
            res.push_back(2*v2[i]);
        }

        return res;
    }
};