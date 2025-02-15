class Solution {
public:
    int punishmentNumber(int n) {
        vector<int> x={1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,657,675,703,756,792,909,918,945,964,990,991,999,1000};
        int a=0;
        for(int i=0;i<x.size();i++){
            if(x[i]==n){
                a=i;
                break;
            }
            if(x[i]>n){
                a=i-1;
                break;
            }
        }
        int ans=0;
        for(int i=0;i<=a;i++){
            ans+=pow(x[i],2);
        }
        return ans; 
    }
};