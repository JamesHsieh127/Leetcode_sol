//KMP algo
class Solution {
public:
    vector<int> KMP(string s)
    {
        int n = s.length();
        vector<int> match(n, -1);
        int j =-1;
        for(int i =0; i<n; ++i)
        {
            while(j>=0 && s[i] != s[j+1])
            {
                j = match[j];
            }
            if(s[i] == s[j+1]) j++;
            match[i] = j;
        }
        return match;
    }


    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if(haystack.empty()) return -1;

        int m = haystack.length(), n = needle.length();
        vector<int> match = KMP(needle);
        int j=-1;
        for(int i =0; i<m; ++i)
        {
            while (j>=0 && haystack[i] != needle[j+1]) j=match[j];
            if(haystack[i] == needle[j+1]) j++;
            if(j==n-1) return (i-n+1);
        }
        return -1;
    }
};

 // General Solution
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int m = haystack.size(), n= needle.size();
        if(m < n) return -1;

        for(int i=0; i<=m-n; ++i)
        {
            int j=0;
            for (j=0; j<n; ++j)
            {
                if(haystack[i+j] != needle[j]) break;
            }
            if(j==n) return i;
        }
        return -1;
    }
};
