class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if (s.length() != t.length())
            return false;

        int n = s.length();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Same character in s
                // must correspond to same character in t
                if (s[i] == s[j] && t[i] != t[j])
                    return false;

                // Different characters in s
                // must correspond to different characters in t
                if (s[i] != s[j] && t[i] == t[j])
                    return false;
            }
        }

        return true;
    }
};