class Solution {
public:
    bool isPalindrome(int x) {
        int s=0,r,t=x;
        if(x<0){
            return false;
        }
        while(x>0){
            r=x%10;
            if(s>(INT_MAX/10)||s<(INT_MIN/10)) return false;
            s=10*s+r;
            x=x/10;
        }
        return (t==s);
    }
};