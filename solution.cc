// Implement pow(x, n).

class Solution {
public:
    double pow(double x, int n) {
        if(n == 0) return 1.0;
        if(n == 1) return x;
        bool pos = true;
        if(n < 0) {
            n = -n;
            pos = false;
        }
        double res = 1.0;
        for(double tmp = x; n > 0; n >>= 1, tmp = tmp*tmp) {
            if(n&1) {
                res *= tmp;
            }
        }
        return pos ? res : 1/res;
    }
};
