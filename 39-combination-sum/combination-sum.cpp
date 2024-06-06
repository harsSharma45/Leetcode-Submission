class Solution {
public:
    void func(vector<int>&arr,int target,vector<vector<int>>&res, vector<int>&temp,int idx){
        if(idx==arr.size()){
            if(target==0){
                res.push_back(temp);
            }
            return;
        }
        if(arr[idx]<=target){
            temp.push_back(arr[idx]);
            func(arr,target-arr[idx],res,temp,idx);
            temp.pop_back();
        }
        func(arr,target,res,temp,idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        func(candidates,target,res,temp,0);
        return res;

    }
};