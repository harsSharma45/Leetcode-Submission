class Solution {
public:
    vector<int> factors(int n){
        vector<int>temp;
        for(int i = 1; i <= n; i++){
            if(n%i==0){
                temp.push_back(i);
            }
        }
        return temp;
    }
    int kthFactor(int n, int k) {
        vector<int>x = factors(n);
        if(x.size()<k){
            return -1;
        }
        return x[k-1];

    }
};