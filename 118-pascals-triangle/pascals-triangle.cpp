class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int> r;
            for(int j=0;j<i+1;j++){
                if(j==0||j==i){
                    r.push_back(1);
                }
                else{
                int a=ans[i-1][j-1]+ans[i-1][j];
                r.push_back(a);
                }
            }ans.push_back(r);
        }
        return ans;
    }
};