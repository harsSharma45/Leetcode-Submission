class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>res;
        double ans = numeric_limits<double>::max(); 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0, j = n - 1;
        int c = 0;
        while(i<j){
            double avg = (nums[i] + nums[j])/2.0;
            res.push_back(avg);
            i++,j--;
        }
        for(int i = 0; i < res.size(); i++){
            if(res[i]<ans){
                ans = res[i];
            }
        }
        return ans;
    }
};