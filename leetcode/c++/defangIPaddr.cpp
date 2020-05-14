#include <string>

using namespace std;

void replaceAll(string& str, const string& from, const string& to) {
    if (from.empty())
        return;
    size_t start_pos = 0;
    while( (start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

class Solution {
public:
    string defangIPaddr(string address) {
        replaceAll(address, ".", "[.]");
        return address;
    }
};