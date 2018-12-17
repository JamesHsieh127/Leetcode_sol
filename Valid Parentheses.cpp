class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i =0; i<s.size(); i++)
        {
            if(isLeft(s[i]))
            {
                stk.push(s[i]);
            }
            else
            {
                if(stk.empty() || isClose(stk.pop(), s[i]))
                    return false;
                stk.pop();
            }
        }
        return stk.empty();
    }

    bool isLeft(char x)
    {
        return (x== '('|| x=='{' || x=='[');
    }

    bool isClose(char x, char y)
    {
        if(x=='(') return y ==')';
        if(x=='{') return y =='}';
        if(x=='[') return y ==']';
        return false;
    }

};
