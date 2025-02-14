class Solution {
public:
    bool canJump(vector<int>& nums) {
      int i=0;
      for(int a=0; i<nums.size() && i<=a; ++i)
      a=max(a, i+nums[i]);
      return i==nums.size();  
    }
};










