class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans=0;
        map<int, int> Map;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){

                Map[nums[i]*nums[j]]++;

            }
        }
        for(auto it : Map){
            if(it.second>1){
                ans+=it.second*(it.second-1)*4;
            }
        }
        return ans;
    }
};