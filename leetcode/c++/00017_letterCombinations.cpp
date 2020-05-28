const vector<string> NUM_2_CHAR = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return vector<string>;
        vector<string> ans = { "" };
        for (char &c in digits) {
            vector<string> tmp;
            int num = c - '0';
            if (num > 1 && num < 10) {
                for (char &l in NUM_2_CHAR[num])
                    for (int i=0; i<result.size(); i++)
                        tmp.push_back(result[i] + l);
                result.swap(tmp);
            }
        }
        return ans;
    }
};
