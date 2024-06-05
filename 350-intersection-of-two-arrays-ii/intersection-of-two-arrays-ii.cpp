class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto it:nums1){
            mp[it]++;
        }
        for(int x:nums2){
            if(mp[x]>0){
                res.push_back(x);
                mp[x]--;
            }

        }
        return res;
    }
};