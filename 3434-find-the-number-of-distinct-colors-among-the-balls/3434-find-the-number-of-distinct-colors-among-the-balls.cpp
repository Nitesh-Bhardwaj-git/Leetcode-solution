class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& v) {
        map<int,int> m1;
        map<int,int>m2;
        vector<int> ans;

        for(int i=0;i<v.size();i++){
            int key = v[i][0];
            int value = v[i][1];
            if(m2.size()&& m2.find(m1[key])!=m2.end()){
             if(m2[m1[key]]==1){
            m2.erase(m1[key]);}
            else{

                m2[m1[key]]--;
            }
            }
            m1[key] = value;
            m2[value]++;
            ans.push_back(m2.size());
        }
        return ans;
    }
};