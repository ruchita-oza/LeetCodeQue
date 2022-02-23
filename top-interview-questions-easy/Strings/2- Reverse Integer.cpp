class Solution {
public:
    int reverse(int n) {
        long long reversedNumber = 0;
        while(n != 0) {
        reversedNumber = reversedNumber*10 + n%10;
        n /= 10;
        }
        return (reversedNumber<INT_MIN || reversedNumber>INT_MAX) ? 0 : reversedNumber;
    }
};