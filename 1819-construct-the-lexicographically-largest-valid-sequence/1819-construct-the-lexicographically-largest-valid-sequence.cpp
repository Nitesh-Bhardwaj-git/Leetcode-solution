class Solution {
public:
    bool backtrack(vector<int>&v , vector<bool> &used, int n, int index){
        while(index<v.size()&&v[index]!=0 ){
            index++;
        }
        if(index==v.size()) return true;

        for(int i=n;i>=1;i--){
            if(used[i]) continue;
            
            if(i==1){
                v[index]=i;
                used[i]=true;
                if(backtrack(v,used,n,index+1)) return true;
                v[index] = 0;
                used[1] = false;
            }
            else if(index+i<v.size() && v[index+i]==0){
                v[index]=i;
                v[index+i]=i;
                used[i]=true;
                if(backtrack(v,used,n,index+1)) return true;
                 v[index] = 0;
                v[index + i] = 0;
                used[i] = false;
            }
             
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<int> v(2*n-1,0);
        vector<bool> used(n,false);
        backtrack(v,used,n,0);
        return v;
    }
};