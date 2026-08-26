class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)return false;
        for(int i=0;i<n1;i++){
            mpp[s[i]-'a']++;
        }
        for(int i=0;i<n2;i++){
            mpp[t[i]-'a']--;
            if(mpp[t[i]-'a']<0)return false;
        }
        return true;
    }
};