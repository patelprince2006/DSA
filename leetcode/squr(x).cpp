class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;  // sqrt(0)=0, sqrt(1)=1

        long long left = 1, right = x / 2, ans = 1;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (mid * mid == x)
                return mid;

            if (mid * mid < x) {
                ans = mid;           // mid is a valid sqrt floor
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
