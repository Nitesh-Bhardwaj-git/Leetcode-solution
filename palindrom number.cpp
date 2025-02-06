class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int positive = x;
        long reversed = 0;
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return positive == reversed;
    }
};
   
