class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx = (nums.size())/2;
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res += abs(nums[i] - nums[idx]);
        }
        return res;
    }
};