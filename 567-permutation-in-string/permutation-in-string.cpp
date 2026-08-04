class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m = s1.size();
        int n = s2.size();

        if (m > n)
            return false;

        vector<int> freq1(26, 0);
        vector<int> window(26, 0);

        for (char c : s1)
            freq1[c - 'a']++;

        // First window
        for (int i = 0; i < m; i++)
            window[s2[i] - 'a']++;

        if (freq1 == window)
            return true;

        // Sliding window
        for (int i = m; i < n; i++) {

            window[s2[i] - 'a']++;          // Add new character
            window[s2[i - m] - 'a']--;      // Remove old character

            if (freq1 == window)
                return true;
        }

        return false;
    }
};