//problem:Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
//For example, the following two linked lists begin to intersect at node c1.

//solution:
ListNode* pA = headA;
        ListNode* pB = headB;

        while (pA != pB) {
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }

        return pA;
Time complexity: O(n + m),Space complexity: O(1)
