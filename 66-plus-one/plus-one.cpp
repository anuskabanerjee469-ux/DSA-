class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;      // Add 1
                return digits;    // No carry, we're done
            }

            digits[i] = 0;        // If digit is 9, make it 0 and carry
        }

        // If all digits were 9, add a 1 at the beginning
        digits.insert(digits.begin(), 1);

        return digits;
    }
};