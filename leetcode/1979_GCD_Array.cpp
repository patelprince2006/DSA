class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0],max=nums[0];

        for(int i=1;i<nums.size();i++){
           if(nums[i]>max){
            max=nums[i];
           }
           if(nums[i]<min){
            min=nums[i];
           }
        }
      
      int p;
        for(int i=min;i>=2;i--){
            if(max % i == 0 && min %i==0){
                 p= i;
                 break;
            }
        }
        return p;
    }
};