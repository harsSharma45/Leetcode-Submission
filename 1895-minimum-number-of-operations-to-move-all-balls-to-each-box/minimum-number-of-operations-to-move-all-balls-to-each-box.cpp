class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>res;
        for(int i = 0; i < boxes.size(); i++){
            int tmp = 0;
            for(int j = 0; j < boxes.size(); j++){
                if(i==j){
                    continue;
                }
                if(boxes[j]=='1'){
                    tmp += abs(j-i);
                }
            }
            res.push_back(tmp);
        }
        return res;

    }
};