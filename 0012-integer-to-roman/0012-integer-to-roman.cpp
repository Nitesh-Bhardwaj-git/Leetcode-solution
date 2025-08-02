class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> value = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };

        string result = "";
        for (auto &[val, sym] : value) {
            while (num >= val) {
                result += sym;
                num -= val;
            }
        }
        return result;
    }
};
