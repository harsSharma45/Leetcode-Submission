class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int ele : arr){
            mp[ele]++;
        }
        priority_queue<int,vector<int>,greater<int>>minHeap;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            minHeap.push(it->second);
        }
        while(k>0){
            if(minHeap.top()==1){
                minHeap.pop();
                k--;
            }
            else{
                int x = minHeap.top();
                minHeap.pop();
                x--,k--;
                if(x>0) {
                    minHeap.push(x);
                }
            }
        }
        return minHeap.size();
    }
};