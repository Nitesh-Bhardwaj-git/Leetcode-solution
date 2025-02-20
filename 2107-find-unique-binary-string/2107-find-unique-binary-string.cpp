class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string a="";
        for(int i=0;i<n;i++){
            nums[i][i]=='1'?a+='0':a+='1';
        }
        return a;   
    }
};