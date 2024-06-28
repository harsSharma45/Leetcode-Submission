class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        vector<string>res;
        auto fun = [&](const string& word) {
            unordered_set<char> *row = nullptr;
            if(row1.count(tolower(word[0]))) {
                row = &row1;
            }else if (row2.count(tolower(word[0]))) {
                row = &row2;
            }else if (row3.count(tolower(word[0]))) {
                row = &row3;
            }
            for(char c : word) {
                if (!row->count(tolower(c))) {
                    return false;
                }
            }
            return true;
        };
         for(const string& word : words) {
            if(fun(word)) {
                res.push_back(word);
            }
        }
        return res;
    }
};