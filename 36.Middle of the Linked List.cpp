//problem:Given the head of a singly linked list, return the middle node of the linked list
//If there are two middle nodes, return the second middle node.

//solution:
ListNode* slow = head;
        ListNode* fast = head;

        // fast moves twice as quickly as slow
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
