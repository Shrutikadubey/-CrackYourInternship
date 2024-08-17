//problem:Given the head of a linked list, remove the nth node from the end of the list and return its head.
//solution:
ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Advances first pointer so that the gap between first and second is n nodes apart
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }
        
        // Move first to the end, maintaining the gap
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }
        
        // Remove the nth node from the end
        ListNode* temp = second->next;
        second->next = second->next->next;
        delete temp;
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
