class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        //sort(costs.begin(),costs.end());
        vector<vector<int>>temp;
        for(const auto& i : costs){
            temp.push_back({i[1]-i[0],i[0],i[1]});
        }
        int res = 0;
        sort(temp.begin(),temp.end());
        for(int i = 0; i<temp.size(); i++){
            if(i<temp.size()/2){
                res += temp[i][2];
            }
            else{
                res += temp[i][1];
            }
        }
    return res;

    }
};