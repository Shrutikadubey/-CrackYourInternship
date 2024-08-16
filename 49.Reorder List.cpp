//problem:You are given the head of a singly linked-list. The list can be represented as:L0 → L1 → … → Ln - 1 → LnReorder the list to be on the following form:
//L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …You may not modify the values in the list's nodes. Only nodes themselves may be changed.

//solution:
if (!head || !head->next || !head->next->next) return;

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        slow->next = nullptr;

        // Merge the two lists
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            ListNode* nextFirst = first->next;
            ListNode* nextSecond = second->next;
            first->next = second;
            second->next = nextFirst;
            first = nextFirst;
            second = nextSecond;
        }
