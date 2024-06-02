class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i = 0; i < piles.size(); i++){
            pq.push(piles[i]);
        }
        //cout<<pq.top()<<endl;
        while(k--){
            int x = pq.top();
            pq.pop();
            x = x - x/2;
            pq.push(x);
        }
        int sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};