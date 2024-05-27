class Solution {
public:
    int specialArray(vector<int>& nums) {
        int res = -1;
        //int x = *max_element(nums.begin(),nums.end());

        for(int i = 0; i <= nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j]>=i){
                    cnt++;
                }
            }
            if(cnt==i){
                res = i;
                break;
            }
        }
        return res;
    }
};