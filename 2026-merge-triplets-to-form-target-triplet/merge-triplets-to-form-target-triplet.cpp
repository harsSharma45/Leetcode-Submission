class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& t) {
        int x = t[0], y = t[1], z = t[2];
        int n = triplets.size();
        bool f1 = false, f2 = false, f3 = false;
        int min1 = 2000, min2 = 2000, min3 =2000;
        vector<int>res(3,0);
        for(int i = 0; i < n; i++){
            int a = triplets[i][0], b = triplets[i][1], c = triplets[i][2];
            if(a<=x && b<=y && c<=z){
            res[0] = max(res[0],a);
            res[1] = max(res[1],b);
            res[2] = max(res[2],c);
            }

        }
        // cout<<min1<<" "<<min2<<" "<<min3<<endl;
        // cout<<res[0]<< " "<<res[1]<< " "<<res[2]<<" ";
        // if(res[0] == min1 || res[1] == min2 || res[2]==min3){
        //     return false;
        // }
        if(res[0] == x && res[1] == y && res[2]==z ){
            return true;
        }
        return false;
    }
};