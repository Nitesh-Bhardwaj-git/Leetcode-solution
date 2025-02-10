class Solution {
public:
    string clearDigits(string s) {

        stack<char> st;
        string ans;

        for (auto it : s) {
            if (isdigit(it)) {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(it);
            }
        }

        if (st.empty())
            return "";

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};