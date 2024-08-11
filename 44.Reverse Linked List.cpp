//problem:Given the head of a singly linked list, reverse the list, and return the reversed list.


//solution:
 ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextTemp = nullptr;

        while (curr != nullptr) {
            nextTemp = curr->next; // Store next node
            curr->next = prev; // Reverse current node's pointer
            prev = curr; // Move pointers one position ahead
            curr = nextTemp;
        }

        return prev;
