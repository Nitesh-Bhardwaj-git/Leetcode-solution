class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int sell2 = 0;
    int hold2 = INT_MIN;
    int sell1 = 0;
    int hold1 = INT_MIN;

    for (int price : prices) {
      sell2 = max(sell2, hold2 + price);
      hold2 = max(hold2, sell1 - price);
      sell1 = max(sell1, hold1 + price);
      hold1 = max(hold1, -price);
    }

    return sell2;
  }
};