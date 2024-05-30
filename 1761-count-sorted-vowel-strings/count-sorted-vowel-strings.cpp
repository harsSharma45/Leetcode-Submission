class Solution {
public:
    int countVowelStrings(int n) {
        int a = 5, b = 10, c = 10, d = 5;
        for(int i = 1; i < n; i++){
            d += c;
            c += b;
            b += a;
            a++;
        }
        return d;

    }
};