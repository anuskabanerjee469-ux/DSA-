class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=-1;
        int j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]!=0){
                i+=1;
                int t=nums[j];
                nums[j]=nums[i];
                nums[i]=t;
            }
            j+=1;
        }
        

        
    }
};