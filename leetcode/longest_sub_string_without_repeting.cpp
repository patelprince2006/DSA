class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1); 
        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // If c has appeared inside the current window, move left pointer
            if (last[c] >= left) {
                left = last[c] + 1;
            }

            last[c] = right;   // update last seen position
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
