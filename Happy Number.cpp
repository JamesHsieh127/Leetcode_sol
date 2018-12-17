class Solution {
public:
    bool isHappy(int n) {
        set<int> happy_set;

        while (n != 1)
        {
            int t =0;
            while(n)
            {
                t += (n%10) * (n%10);
                n /= 10;
            }
            n = t;
            if(happy_set.count(n)) break;
               else happy_set.insert(n);
        }
        return n ==1;
    }
};
