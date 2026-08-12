class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        // Step 1: reverse
        head = reverse(head);

        // Step 2: remove smaller nodes
        int maxVal = head->val;
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {

            if (curr->next->val < maxVal) {
                // delete curr->next
                curr->next = curr->next->next;
            } else {
                // keep curr->next
                curr = curr->next;
                maxVal = curr->val;
            }
        }

        // Step 3: reverse back
        head = reverse(head);

        return head;
    }
};