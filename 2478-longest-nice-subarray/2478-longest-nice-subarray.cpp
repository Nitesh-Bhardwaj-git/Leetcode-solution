class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        long long a=0;
        int mxlen=1;
        int left=0;
        for(int right=0;right<n;right++){
            while((a&nums[right])!=0){
                a-=nums[left];
                left++;
            }
            a+=nums[right];
            mxlen=max(mxlen,right-left+1);
        }
        return mxlen;
    }
};