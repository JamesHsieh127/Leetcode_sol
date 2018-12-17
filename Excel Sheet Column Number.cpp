class Solution {
public:
    int titleToNumber(string s) {
        int columnNum = 0;
        for(int i =0; i<s.size(); ++i)
        {
            columnNum =(s[i] - 'A' +1)+(columnNum *26);
        }
        return columnNum;
    }
};
