class Solution {
public:

    // Function to find the first occurrence
    int findFirst(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;          // Store answer
                high = mid - 1;     // Search on left side
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    // Function to find the last occurrence
    int findLast(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;          // Store answer
                low = mid + 1;      // Search on right side
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = findFirst(nums, target);
        int last = findLast(nums, target);

        return {first, last};
    }
};