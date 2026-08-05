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
    ListNode* reverse(ListNode* head) {
        ListNode* Node = nullptr;
        while (head != nullptr) {
            ListNode* temp = head->next;
            head->next = Node;
            Node = head;
            head = temp;
        }
        return Node;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* reversedList = reverse(slow->next);

        while (reversedList != NULL) {
            if (reversedList->val != head->val) {
                return false;
            }
            reversedList = reversedList->next;
            head = head->next;
        }
        return true;
    }
};