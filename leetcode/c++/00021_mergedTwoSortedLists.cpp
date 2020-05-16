using namespace::std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode *ans = new ListNode();
      ListNode *head = ans;
      while (l1 != nullptr && l2 != nullptr) {
        ListNode *curr = new ListNode();
        if (l1->val < l2->val) {
          curr->val = l1->val;
          l1 = l1->next;
        } else {
          curr->val = l2->val;
          l2 = l2->next;
        }
        head->next = curr;
        head = curr;
      }
      if (l1 != nullptr) head->next = l1;
      if (l2 != nullptr) head->next = l2;
      return ans->next;
    }
};



