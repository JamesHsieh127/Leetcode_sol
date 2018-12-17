class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        for(char s : S)
        {
            for(char j :J)
            {
                if(s == j) ++result;
            }
        }
        return result;
    }
};
