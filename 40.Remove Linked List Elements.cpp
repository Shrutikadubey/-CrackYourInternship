//problem:Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

//solution:
ListNode dummy(0);
        dummy.next = head;
        ListNode* current = &dummy;

        // Traverse the list
        while (current->next != nullptr) {
            // If the next node's value matches, skip it
            if (current->next->val == val) {
                current->next = current->next->next;
            } else {
                // Move to the next node
                current = current->next;
            }
        }

        // Return the new head (dummy's next)
        return dummy.next;
    }
};
