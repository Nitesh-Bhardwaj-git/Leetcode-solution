class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        multiset<int> res(arr.begin(),arr.end());
        int s=arr[0], e=arr[1];
        int N=arr.size(),mx = arr[N-1],ans=0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                int cnt=0;
                int sum = arr[i]+arr[j];
                if(mx<sum) break;
                int prev = arr[j];
                while(res.count(sum)) {
                    int tmp = sum;
                    sum += prev;
                    prev = tmp;
                    if(cnt==0) cnt+=3;
                    else cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};