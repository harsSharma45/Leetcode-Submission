class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int c1 = 0, c2  = 0, c3 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]==0) c1++;
            if(nums[i]==1) c2++;
            if(nums[i]==2) c3++;
        }
        int i = 0;
            while(c1--){
                nums[i] = 0;
                i++;
            }
            while(c2--){
                nums[i] = 1;
                i++;
            }
            while(c3--){
                nums[i] = 2;
                i++;
            }
        
    }
};