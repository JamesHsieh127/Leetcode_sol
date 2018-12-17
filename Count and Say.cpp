class Solution {
public:
    string countAndSay(int n) {
        if(n <1) return "";
        string ret = "1";

        for (int i =2; i<=n; i++)
        {
            string temp = "";
            int count = 0;
            char current = ret[0];
            int index = 0;
            while (index < ret.length())
            {
                if(ret[index] == current) count++;
                else
                {
                    temp += to_string(count) + current;
                    current = ret[index];
                    count =1;
                }
                index++;
            }
            temp += to_string(count) + current;
            ret = temp;
        }
        return ret;
    }
};
