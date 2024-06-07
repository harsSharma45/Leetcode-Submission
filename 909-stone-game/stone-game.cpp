class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        priority_queue<int>maxHeap;
        for(int i = 0; i < piles.size(); i++){
            maxHeap.push(piles[i]);
        }
        int cnt1 = 0, cnt2 = 0;
        while(!maxHeap.empty()){
            cnt1+=maxHeap.top();
            maxHeap.pop();
            cnt2+=maxHeap.top();
            maxHeap.pop();
        }
    return cnt1>cnt2;
    }
};