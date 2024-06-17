
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int i = 0, j = sqrt(c);
        while(i<=j){
                long long int sum = i*i + j*j;
                if(i*i>c) return false;
                if(sum==c) return true;
                else if(sum>c)
                j--;
                else
                i++;
           } 
    return false;
    }
};