class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            int non_zero_idx = 0; 

            for(int i = 0; i < n; i++) {
                if(i < n - 1 && nums[i] == nums[i + 1]) {
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                }
                if(nums[i] != 0) {
                    swap(nums[i], nums[non_zero_idx++]);
                }
            }

            return nums;
        }
};