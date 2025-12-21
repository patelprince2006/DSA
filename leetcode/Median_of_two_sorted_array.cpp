class Solution{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector<int> total;        // FIX: start empty
       
        // FIX: proper merging logic (still using your structure)
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()){
            if (nums1[i] < nums2[j]){
                total.push_back(nums1[i++]);
            } else {
                total.push_back(nums2[j++]);
            }
        }

        // add remaining elements
        while (i < nums1.size()) total.push_back(nums1[i++]);
        while (j < nums2.size()) total.push_back(nums2[j++]);

        int n = total.size();

        // FIX: correct median logic
        if (n % 2 == 0){
            int a = n/2 - 1;
            int b = n/2;
            return (total[a] + total[b]) / 2.0;
        } else {
            return total[n/2];
        }
    }
};
