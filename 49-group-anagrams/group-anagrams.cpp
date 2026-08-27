class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            mpp[key].push_back(strs[i]);
        }
        for(auto x : mpp){
            ans.push_back(x.second);
        }
        return ans;
    }
};