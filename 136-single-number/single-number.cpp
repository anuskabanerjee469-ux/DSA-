#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;

        // Count frequency of each element
        for (int num : nums) {
            mp[num]++;
        }

        // Find the element that appears only once
        for (auto it : mp) {
            if (it.second == 1) {
                return it.first;
            }
        }

        return -1; // This line will never be reached for valid input
    }
};