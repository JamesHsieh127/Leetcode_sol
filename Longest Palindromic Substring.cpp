//DP solution
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <= 1) return s;
        int start =0, max_len = 1, n = s.size();
        bool isPalindrdome[1000][1000] = {false};

        for(int i =n-1; i>=0; i--)
        {
            for(int j =i; j<n; ++j)
            {
                if((i+1>j-1 || isPalindrdome[i+1][j-1]) && s[i]==s[j])
                {
                    isPalindrdome[i][j] = true;
                    if(j-i+1 > max_len)
                    {
                        max_len = j-i+1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, max_len);
    }
};


//Another solution
class Solution {
public:
    int maxLen;
    int maxStart;
    void extendPalindrome(string& s, int j, int k) {
        while(0 <= j && k < s.size() && s[j] == s[k]) {
            --j; ++k;
        }
        ++j; --k;
        int curLen = k-j+1;
        if(curLen > maxLen) {
            maxLen = curLen;
            maxStart = j;
        }
    }
    string longestPalindrome(string s) {
        if(s.empty() || s.size() == 1) return s;
        maxLen = 1;
        maxStart = 0;
        for(int i=0; i<s.size()-1; ++i) {
            extendPalindrome(s, i, i);
            extendPalindrome(s, i, i+1);
        }
        return s.substr(maxStart, maxLen);
    }
