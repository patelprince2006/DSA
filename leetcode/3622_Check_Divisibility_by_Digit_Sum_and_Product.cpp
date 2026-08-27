class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,mu=1,to=n,ld,ans;

        while(to>0){
          ld=to%10;
          to/=10;

          sum += ld;
          mu *= ld;
        }
        ans=sum+mu;
        if(n%ans==0){
            return true;
        }
        return false;
    }
};