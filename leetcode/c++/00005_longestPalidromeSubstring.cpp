#include<string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        else if (s.length() == 1) return s;
        int start = 0, end = 0, max_len = 0;
        string res;
        for (int i = 0; i < s.length(); i++) {
            // if (s.size() - i <= max_len / 2) break;
            start = i; end = i;
            while (s[start] == s[end+1]) { end++; if ( end == s.length()-1 ) break; }
            // expand
            while (start > 0 && end < s.length()-1 && s[start-1] == s[end+1]) {start--; end++;}
            if (end - start + 1> max_len) {
                max_len = end - start +1;
                res = s.substr(start, max_len);
            }
        }
        return res;
    }
};