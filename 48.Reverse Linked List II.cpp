//problem:Given the head of a singly linked list and two integers left and right where left <= right, 
//reverse the nodes of the list from position left to position right, and return the reversed list.

//solution:
ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;

        // Move pre to the node before the left position
        for (int i = 0; i < left - 1; i++) {
            pre = pre->next;
        }

        // Start reversing
        ListNode* cur = pre->next;
        for (int i = 0; i < right - left; i++) {
            ListNode* temp = cur->next;
            cur->next = temp->next;
            temp->next = pre->next;
            pre->next = temp;
        }

        return dummy->next;
