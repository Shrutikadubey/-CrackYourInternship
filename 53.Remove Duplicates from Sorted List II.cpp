//problem:Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
//solution:
if (head == nullptr) return nullptr;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;

        while (current->next != nullptr && current->next->next != nullptr) {
            if (current->next->val == current->next->next->val) {
                int val = current->next->val;
                while (current->next != nullptr && current->next->val == val) {
                    current->next = current->next->next;
                }
            } else {
                current = current->next;
            }
        }

        return dummy->next;
