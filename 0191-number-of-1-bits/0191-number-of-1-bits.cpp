class Solution {
public:
    int hammingWeight(int n) {
        int a=0;
        for(int i=0; i<32; i++)
        if((n>>i)& 1)
        ++a;
        return a;
    }
};