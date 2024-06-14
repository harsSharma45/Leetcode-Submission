class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0;
        for(int i = 1; i < nums.size(); i++){
            int temp = 0;
            if(nums[i] <= nums[i-1]){
                int temp = abs(nums[i-1] - nums[i] + 1);
                nums[i] = nums[i-1]+1;
                res += temp;
                
            }
        }
    return res;
    }
};