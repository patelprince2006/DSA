class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        for (int i = 0; i <= (int)haystack.length() - (int)needle.length(); ++i) {
            bool match = true;
            for (int j = 0; j < (int)needle.length(); ++j) {
                if (haystack[i + j] != needle[j]) {
                    match = false;
                    break;
                }
            }
            if (match) return i;
        }

        return -1;
    }
};