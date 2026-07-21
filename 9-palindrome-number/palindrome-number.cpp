class Solution {
public:
    bool isPalindrome(int x) {
        int dup=x;
        int p=0;
        while(dup>0){
            int ld=dup%10;
            if(p>INT_MAX/10||p<INT_MIN/10){return false;}
            p=(p*10)+ld;
            dup=dup/10;
        }
        if(p==x){
            return true;
        }
        else{return false;}
    }
};