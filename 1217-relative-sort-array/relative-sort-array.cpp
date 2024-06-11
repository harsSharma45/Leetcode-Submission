class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>res;
        vector<int>temp;
        map<int,int>mp;
        for(auto it:arr1){
            mp[it]++;
       }
     
       for(int i = 0; i < arr2.size(); i++){
          if(mp[arr2[i]]>0){
            int x = mp[arr2[i]];
            while(x--){
                res.push_back(arr2[i]);
            }
            mp[arr2[i]] = 0;
          }
       }
    for(auto it:mp){
       int x = it.second;
       int y = it.first;
       if(x>0){
        while(x--){
            temp.push_back(y);
        }
       }
        
    }
     sort(temp.begin(),temp.end());
     int i = 0;
     while(i<temp.size()){
        res.push_back(temp[i]);
        i++;
     }
    return res;
    }
};