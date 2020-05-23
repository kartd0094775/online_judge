class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;

        int max_len = 1;
        unordered_map<char, int> char_map = unordered_map<char, int>();
        for(int i=0, start=0; i < s.size(); i++) {
            if (char_map.count(s[i]) != 0) {
                start = max(start, char_map[s[i]] + 1);
            }
            char_map[s[i]] = i;
            max_len = max(max_len, i - start + 1);
        }
        return max_len;
    }
};

