class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int ans = 0;
    vector<int> count(128);

    for (int i = 0, a= 0; a<s.length(); ++a) {
      ++count[s[a]];
      while (count[s[a]]>1)
        --count[s[i++]];
      ans = max(ans, a-i + 1);
    }
    return ans;
  }
};




























