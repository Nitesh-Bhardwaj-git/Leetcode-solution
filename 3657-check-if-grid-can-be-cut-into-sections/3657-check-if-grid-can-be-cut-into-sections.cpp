class Solution {
public:
    typedef pair<int, int> pii;
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pii> xCoords;
        vector<pii> yCoords;
        for(vector<int> i: rectangles){
            xCoords.push_back({i[0], i[2]});
            yCoords.push_back({i[1], i[3]});
        }

        sort(xCoords.begin(), xCoords.end());
        int start = 0, end = 0, sec = 0;
        for(pii p: xCoords){
            if(p.first >= end){
                start = p.first;
                end = p.second;
                sec++;
            }
            else
                end = max(end, p.second);
            if(sec == 3)
                return true;
        }

        sort(yCoords.begin(), yCoords.end());
        start = 0, end = 0, sec = 0;
        for(pii p: yCoords){
            if(p.first >= end){
                start = p.first;
                end = p.second;
                sec++;
            }
            else
                end = max(end, p.second);
            if(sec == 3)
                return true;
        }
        return false;
    }
};  