/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;

        ListNode* currA = headA; ListNode* currB = headB;
        while(currA != currB) {
            if (currA == nullptr && currB == nullptr) return nullptr;
            (currA == nullptr)? currA = headB : currA = currA->next;
            (currB == nullptr)? currB = headA : currB = currB->next;
        }
        return currA;
    }
};
