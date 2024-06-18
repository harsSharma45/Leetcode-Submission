class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>vp;
        for(int i = 0; i < profit.size(); i++){
            vp.emplace_back(difficulty[i],profit[i]);
        }
        sort(vp.begin(),vp.end());
        sort(worker.begin(),worker.end());
        int res = 0,maxPft = 0;
        int j = 0;  
        for(int i = 0; i < worker.size(); i++){
            while(j<vp.size() && worker[i]>=vp[j].first){
                maxPft = max(maxPft,vp[j].second);
                j++;
            }
            res += maxPft;
        }
       
        return res;


    }
};