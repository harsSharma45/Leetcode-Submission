class Solution {
public:

    string arrangeWords(string text) {
        vector<string>v;
        string temp = "";
        for(int i = 0; i < text.length(); i++){
            if(text[i]==' '){
                v.push_back(temp);
                temp = "";
            }
            else{
                temp += tolower(text[i]);
            }
        }
        v.push_back(temp);
        stable_sort(v.begin(),v.end(),[](const string &a, const string &b){
            return a.length()<b.length();
        });
        string res = "";
        for(int i = 0; i < v.size();i++){
            if(i>0) res += " ";
            res+=v[i];
            
        }
        res[0] = toupper(res[0]);
        return res;

    }
};