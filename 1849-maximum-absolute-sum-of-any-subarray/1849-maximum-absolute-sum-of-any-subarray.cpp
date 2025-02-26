class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxVal = 0, minVal = 0;
        int prev = 0;
        for(int i=0; i<nums.size(); i++) {
            nums[i] += prev;
            maxVal = max(maxVal, nums[i]);
            minVal = min(minVal, nums[i]);
            prev = nums[i];
        }
        return maxVal - minVal;
    }
};