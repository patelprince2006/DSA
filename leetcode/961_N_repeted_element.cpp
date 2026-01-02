class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int max=0,k=0;
       for(int i=0;i<nums.size();i++){
           int a=0;
         for(int j=0;j<nums.size();j++){
             
            if(nums[i]==nums[j]){
                 a++;
            }
         }
         if(a>max){
             max=a;
             k=nums[i];
         }
       }
       return k;
        
    }
};