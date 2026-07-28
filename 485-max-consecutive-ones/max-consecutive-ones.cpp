class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int m=0,count=0;
       int n=nums.size();
       for(int i=0;i<n;i++){
        if(nums[i]!=1){
            m=max(m,count);
            count=0;
        }
        else{
            count++;
            m=max(m,count);

        }
       }
       return m; 
    }
};