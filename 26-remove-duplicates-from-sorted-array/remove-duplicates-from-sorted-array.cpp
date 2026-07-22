class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> dup;
        for(int i=0;i<nums.size();i++){
            dup.push_back(nums[i]);
        }
        int prev=dup[0];
        int u=1;
        nums[0]=dup[0];
        for(int i=1;i<nums.size();i++){
            if(prev!=dup[i]){
                nums[u++]=dup[i];
                prev=dup[i];
            }
            else
            prev=dup[i];
        }
        return u;
    }
    
};