class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            N=-N;
            x=1/x;
        }
        double ans=1;
        while(N>0){
            if(N % 2 ==0){
                N/=2;
                x*=x;
            }
            else{
                N--;
                ans *= x;
            }
        }
       
        return ans;
    }
};