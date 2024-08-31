//problem:Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

//solution:
  ListNode* current = head;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        int count = 0;

        // Reverse first k nodes
        while (current != nullptr && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }

        // If there are remaining nodes, recursively call the function
        if (next != nullptr) {
            head->next = reverseKGroup(next, k);
        }

        return prev;
