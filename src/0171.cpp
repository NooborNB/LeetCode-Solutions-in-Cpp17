class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for (auto& x : s)
        {
            res *= 26;
            res += x - 'A' + 1;
        }
        return res;
    }
};