class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
       
        int count =0;
        
        for(int i=0; i<k-1;i++){
            colors.push_back(colors[i]);
          
        }
        int i=0;  
        int n = colors.size();

            for(int j=i+1; j<n; j++){
                if(colors[j]==colors[j-1]){
                    i=j;
                }
                if(j-i+1 >=k){
                    count++;
                }
            
            
        } return count;
    }
};