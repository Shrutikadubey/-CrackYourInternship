//problem:You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

//solution:
 auto comp = [](ListNode* a, ListNode* b) { return a->val > b->val; };
        priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> pq(comp);
        
        for (auto& list : lists) {
            if (list) pq.push(list);
        }
        
        ListNode dummy;
        ListNode* curr = &dummy;
        
        while (!pq.empty()) {
            curr->next = pq.top();
            pq.pop();
            curr = curr->next;
            if (curr->next) pq.push(curr->next);
        }
        
        curr->next = nullptr;
        return dummy.next;
