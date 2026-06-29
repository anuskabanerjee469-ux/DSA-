class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0; int j=1;

        while(i<n && j<n) {
            while(i < n && nums[i] != 0) i++;
            while(j < n && nums[j] == 0) j++;

            while(j <= i && j < n) j++;

            if(i < n && j < n && nums[i] == 0 && nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};