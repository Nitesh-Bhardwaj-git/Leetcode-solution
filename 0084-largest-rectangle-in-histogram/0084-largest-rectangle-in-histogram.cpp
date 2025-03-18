class Solution {
 public:
  int largestRectangleArea(vector<int>& heights) {
    int ans=0;
    stack<int> stack;

    for (int i=0;i<=heights.size(); ++i) {
      while (!stack.empty() &&
             (i==heights.size() || heights[stack.top()] > heights[i])) {
        int h=heights[stack.top()];
        stack.pop();
        int w=stack.empty() ? i : i-stack.top() - 1;
        ans=max(ans, h * w);
      }
      stack.push(i);
    }
    return ans;
  }
};