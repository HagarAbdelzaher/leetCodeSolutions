/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* temp = NULL;
        while (current != NULL)
        {
            ListNode* n = new ListNode(current->val);
            n->next = temp;
            temp = n;
            current = current->next;
        }
        return temp;
    }
};