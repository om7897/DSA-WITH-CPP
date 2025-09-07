class Solution {
public:
    int reverse(int x) {
        int r,s=0,t=x;
        while(x!=0){
            r=x%10;
            if((s>(INT_MAX/10))||(s<(INT_MIN/10))){
                return 0;
            }
            s=10*s+r;
            x=x/10;
        }
        return s;
    }
};