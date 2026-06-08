class Solution {
public:
    int reverse(int n) {
        long revNum = 0;

        while(n!= 0){
            int dig = n%10;

            revNum = revNum*10 +dig;
            n = n/10;
        }
        if (revNum > INT_MAX || revNum < INT_MIN) {
            return 0;
        }
        return revNum;
    }
};