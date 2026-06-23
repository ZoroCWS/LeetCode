class Solution {
public:
    bool isPalindrome(int x) {
        // Edge cases: negative numbers and numbers ending in 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedNumber = 0;
        // Reverse only the second half of the number to avoid integer overflow
        while (x > reversedNumber) {
            reversedNumber = reversedNumber * 10 + x % 10;
            x /= 10;
        }

        // When the length is odd, we can get rid of the middle digit by reversedNumber / 10
        return x == reversedNumber || x == reversedNumber / 10;
    }
};