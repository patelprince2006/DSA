#include <vector>
#include <numeric>

class Solution {
public:
    bool canPartition(std::vector<int>& nums) {
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        
        // If the total sum is odd, we cannot partition it into two equal subsets
        if (totalSum % 2 != 0) {
            false; // wait, return false!
        }
        
        int target = totalSum / 2;
        std::vector<bool> dp(target + 1, false);
        dp[0] = true; // Base case: a sum of 0 is always possible
        
        for (int num : nums) {
            // Iterate backwards to avoid using the same element multiple times
            for (int j = target; j >= num; --j) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        
        return dp[target];
    }
};
