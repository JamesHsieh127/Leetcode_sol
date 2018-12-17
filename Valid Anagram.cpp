class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> char_count(26, 0);
        for(int i =0; i < s.size(); i++)
        {
            char_count[s[i]- 'a']++;
        }

        for(int j=0; j< t.size(); j++)
        {
            char_count[t[j]- 'a']--;
        }

        for(int k=0; k< char_count.size(); k++)
        {
            if(char_count[k] != 0) return false;
        }
        return true;
    }
};


//Another Solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t) return true;
        else return false;
    }
};
