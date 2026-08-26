class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)return false;
        for(int i=0;i<n1;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n2;i++){
            mpp[t[i]]--;
            if(mpp[t[i]]<0)return false;
        }
        return true;
    }
};