class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2;
        int next=0;
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        for(int i=0;i<=n-3;i++){
            next=a+b;
            a=b;
            b=next;
        }
        return next;
    }
};