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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* node = head;
        while (node != NULL) {
            node = node->next;
            cnt++;
        }
        cnt = cnt - n;
        cout << cnt << endl;
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;
        while (curr != NULL) {
            if (cnt <= 0) {
                prev->next = curr->next;
                break;
            }
            cnt--;
            prev = curr;
            curr = curr->next;
        }
        return dummy.next;
    }
};
