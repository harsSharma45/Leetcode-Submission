class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int,int>mp;
        int n = nums.size();
       // vector<int>pref(n+1);
       int sum = 0;
        mp[0]++;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            int rem = sum%k;
            if(rem<0){
                rem += k;
            }
            if(mp.find(rem)!=mp.end()){
                cnt += mp[rem];
            }
            mp[rem]++;
        }
        return cnt;
    }
};