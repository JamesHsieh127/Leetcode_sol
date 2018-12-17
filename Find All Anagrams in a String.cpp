class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.empty()) return {};

        vector<int> result;
        vector<int> m1(256, 0), m2(256, 0);
        for(int i = 0; i<p.size(); ++i)
        {
            ++m1[s[i]];
            ++m2[p[i]];
        }

        if(m1 == m2) result.push_back(0);

        for(int i = p.size(); i<s.size(); ++i)
        {
            ++m1[s[i]];
            --m1[s[i-p.size()]];
            if(m1 == m2) result.push_back(i-p.size()+1);
        }
        return result;
    }
};
