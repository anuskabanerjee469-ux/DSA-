class Solution {
public:
    int binarySearch(vector<int>& nums, int left, int right, int target) {
        // Base case: element not found
        if (left > right) {
            return -1;
        }

        int mid = left + (right - left) / 2;

        // Element found
        if (nums[mid] == target) {
            return mid;
        }

        // Search in the right half
        if (nums[mid] < target) {
            return binarySearch(nums, mid + 1, right, target);
        }

        // Search in the left half
        return binarySearch(nums, left, mid - 1, target);
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};