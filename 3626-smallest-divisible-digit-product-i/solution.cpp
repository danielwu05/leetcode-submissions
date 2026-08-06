class Solution {
public:
    int smallestNumber(int n, int t) {
        int dec = n / 10;
        if (n / 10 == 0) dec = 1; 
        while (((n % 10) * (dec)) % t > 0) {
            n++;
        }
        return n;
    }
};
