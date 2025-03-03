class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        int n = nums.size();
        int p=0;
        int q=n-1;  
        vector<int> res;
        for(int i: nums)
        {
            if(i<pivot) res.push_back(i);
        }
        for(int i: nums)
        {
            if(i==pivot) res.push_back(i);
        }
        for(int i: nums)
        {
            if(i>pivot) res.push_back(i);
        }
        return res;
    }
};