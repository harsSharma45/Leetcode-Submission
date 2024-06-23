class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
    deque<int> d1, d2;
    int left = 0;
    int ans = 0;
    
    for (int right = 0; right < nums.size(); ++right) {
        while (!d1.empty() && nums[right] > nums[d1.back()]) {
            d1.pop_back();
        }
        while (!d2.empty() && nums[right] < nums[d2.back()]) {
            d2.pop_back();
        }
        
        d1.push_back(right);
        d2.push_back(right);
        
        while (nums[d1.front()] - nums[d2.front()] > limit) {
            ++left;
            if (d1.front() < left) {
                d1.pop_front();
            }
            if (d2.front() < left) {
                d2.pop_front();
            }
        }
        
        ans = max(ans, right - left + 1);
    }

    return ans;
    }
};