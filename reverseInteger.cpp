// Cameron Gibson
// Solution for: 7. Reverse Integer
// https://leetcode.com/problems/reverse-integer/solution/

class Solution {
public:
    int reverse(int x) {
        // reverse with pop and push
        // pop the last digit off of x and push it to the back of the rev
        int rev = 0;
        while (x != 0){
            //pop operation:
            int pop = x%10;
            x/=10;

            // check if appending will cause overflow (+7 and -8 are last digits of int max value)
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7))
                return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && pop < -8))
                return 0;

            // once checked, push operation:
            rev = rev*10+pop;   
        }
        return rev;
    }
};
