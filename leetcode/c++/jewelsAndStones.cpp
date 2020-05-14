#include <string>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        int numJewelsInStones(string J, string S) {
            unordered_set<char> uset(J.begin(), J.end());
            int count = 0;
            for (char& c: S) {
                if (uset.count(c)) {
                    count += 1;
                }
            }
            return count;
        }
};