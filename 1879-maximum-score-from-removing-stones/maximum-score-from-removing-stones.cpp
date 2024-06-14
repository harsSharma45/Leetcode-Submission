class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int res = 0;
        priority_queue<int>maxHeap;
        maxHeap.push(a);
        maxHeap.push(b);
        maxHeap.push(c);
        while(maxHeap.top()>0){
            int x = maxHeap.top();
            maxHeap.pop();
            int y = maxHeap.top();
             if(maxHeap.top()==0){
                return res;
            }
            maxHeap.pop();
            x--,y--;
            maxHeap.push(x);
            maxHeap.push(y);
            res++;

        }
        
        return res;
    }
};