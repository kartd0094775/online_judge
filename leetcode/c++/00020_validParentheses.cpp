#include<stack>
#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
  bool ans = true;
  bool isValid(string s) {
    cout << s.length() << endl;

    if (s.length() == 0) {
      ans = true; return ans;
    }

    if (s.length() % 2 == 1) {
      ans = false; return ans;
    }

    stack<int> stack1;
    for (char &c1 : s) {
      cout << "begin" << endl;
      if (c1 == '(' || c1 == '[' || c1 == '{') stack1.push(c1);
      else {
        if (stack1.empty()) {
          ans = false;
          break;
        } else {
          char c2 = stack1.top();
          cout << c2 << c1 << endl;
          stack1.pop();
          if (c2 == '(' && c1 == ')') continue;
          else if (c2 == '[' && c1 == ']') continue;
          else if (c2 == '{' && c1 == '}') continue;
          else {
            ans = false;
            break;
          }
        }
      }
    }
    if (!stack.empty()) ans = false;
    return ans;
  }
};

int main(int argc, char *argv[]) {
  Solution a;
  a.isValid(argv[1]);
  cout << a.ans << endl;
  return 0;
}
