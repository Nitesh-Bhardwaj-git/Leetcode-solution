class Solution {
public:
    bool ispossible(vector<int>& nums, int mid, int k){
        int count_of_houses = 0;
        int i = 0;
        while(i < nums.size()){
            if(nums[i] <= mid){
                count_of_houses ++;
                i += 2;
            }
            else{
                i++;
            }
        }
        return count_of_houses >= k;
    }
    
    int minCapability(vector<int>& nums, int k) {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());
        int result = right;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(ispossible(nums, mid, k) == true){
                result = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return result;
    }
};