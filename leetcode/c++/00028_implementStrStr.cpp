class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;

        int m(haystack.size()); int n(needle.size());
        vector<int> lps = kmpProcess(needle);
        for (int i(0), len(0); i <= m-n;) {
            if (haystack[i+len] == needle[len]) {
                len++;
                if (len == n) return i;
            } else if (len != 0) {
                i = i + len - lps[len-1];
                len = lps[len-1];
            } else {
                i++;
            }
        }
        return -1;
    }
private:
    vector<int> kmpProcess(string needle) {
        int n = needle.size();
        vector<int> lps(n, 0);
        for (int i(1), len(0); i < n;) {
            if (needle[i] == needle[len]) {
                lps[i++] = ++len;
            } else if(len != 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
        return lps;
    }
};

