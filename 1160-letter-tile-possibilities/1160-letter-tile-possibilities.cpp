class Solution {
private:
    int buildstring(vector<int>&fre){
        int sequence = 0;
        for(int i=0;i<26;i++){
            if(fre[i]>0){
                fre[i]--;
                sequence += 1 + buildstring(fre);
                fre[i]++;
            }
        }
        return sequence;
    }
public:
    int numTilePossibilities(string tiles) {
        vector<int> fre(26,0);
        for(char c:tiles){
            fre[c-'A']++;
        }
        return buildstring(fre);
    }
};