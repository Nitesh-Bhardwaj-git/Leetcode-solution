class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for( int x = 0 ; x < n-2 ; x++ ){
            if( nums[ x ] == 0 ){
                nums[ x ] = 1;
                nums[ x+1 ] = 1 - nums[ x+1 ];
                nums[ x+2 ] = 1 - nums[ x+2 ]; 
                count++;
            }
        }
        for( auto i : nums ) if( i == 0 ) return -1;
        return count;
    }
};