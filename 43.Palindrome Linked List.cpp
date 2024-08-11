//problem:Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

//solution:
if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Find the end of the first half and reverse the second half.
        ListNode* firstHalfEnd = endOfFirstHalf(head);
        ListNode* secondHalfStart = reverseList(firstHalfEnd->next);

        // Check whether or not there is a palindrome.
        bool result = true;
        ListNode* firstPosition = head;
        ListNode* secondPosition = secondHalfStart;
        while (result && secondPosition != nullptr) {
            if (firstPosition->val != secondPosition->val) {
                result = false;
            }
            firstPosition = firstPosition->next;
            secondPosition = secondPosition->next;
        }

        // Restore the list and return the result.
        firstHalfEnd->next = reverseList(secondHalfStart);
        return result;
    }

private:
    ListNode* endOfFirstHalf(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* nextTemp = current->next;
            current->next = previous;
            previous = current;
            current = nextTemp;
        }
        return previous;
