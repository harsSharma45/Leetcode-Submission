class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int cnt1 = 0, cnt2 = 0;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i = 0; i < s1.size(); i++){
            if(s1[i]>=s2[i]){
                cnt1++;
            }
        }
        for(int i = 0; i < s1.size(); i++){
            if(s1[i]<=s2[i]){
                cnt2++;
            }
        }
        return (cnt2==s1.size() || cnt1==s1.size());
    }
};