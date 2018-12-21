class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1) return x;

        double temp = 0;
        double result = 1;
        while(result != temp)
        {
            temp = result;
            result = (result+x/result)/2;
        }
        return int(result);
    }
};
