class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        long long int i = 1, j = x;
        long long int res = 1;
        while(i<=j){
            long long int mid = i + (j - i)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid < x){
                res = mid;
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
        return res;
    }
};