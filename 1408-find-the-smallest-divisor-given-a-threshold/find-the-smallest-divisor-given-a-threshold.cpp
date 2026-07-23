class Solution {
public:

    int sumByD(vector<int>& nums, int divisor) {

        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += ceil((double)nums[i] / divisor);
        }

        return sum;
    }

    int smallestDivisor(vector<int>& arr, int limit) {

        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (sumByD(arr, mid) <= limit)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};