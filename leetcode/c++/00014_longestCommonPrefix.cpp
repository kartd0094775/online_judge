#include<iostream>
#include<vector>

using namespace::std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];
        int position = 0;
        bool same_substr = true;
        while (same_substr) {
            for (int i=0; i < strs.size()-1; i++) {
                if (position >= strs[i].size() || strs[i][position] != strs[i+1][position]) {
                    same_substr = false;
                    break;
                }
            }
            if (same_substr) {
                position++;
            }
        }
        if (position == 0) {
            return "";
        } else {
            return strs[0].substr(0, position);
        }
    }
};