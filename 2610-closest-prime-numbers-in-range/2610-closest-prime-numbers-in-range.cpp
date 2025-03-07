class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
       vector<bool> prime(right+1,true);
       prime[0]=prime[1]=false;

        for(int i=2 ; i*i<=right;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=right;j+=i){
                    prime[j]=false;
                }
            }
        }

        vector<int> v;
        for(int i=left;i<=right;i++){
            if(prime[i]) v.push_back(i);
        }
        
        int mini = INT_MAX;
        vector<int> result={-1,-1};

        for(int i=1;i<v.size();i++){
            int gap = v[i]-v[i-1];

            if(gap<mini){
                mini = gap;
                result={v[i-1], v[i]};
            }
        }
        return result;
    }
};