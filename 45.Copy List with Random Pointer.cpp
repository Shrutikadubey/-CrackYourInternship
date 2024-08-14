//problem:A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

//solution:
if (!head) return NULL;

    // Create a hashmap to store the nodes
    unordered_map<Node*, Node*> nodeMap;

    // First pass: create new nodes and store them in the hashmap
    Node* curr = head;
    while (curr) {
        nodeMap[curr] = new Node(curr->val);
        curr = curr->next;
    }

    // Second pass: set the next and random pointers
    curr = head;
    while (curr) {
        nodeMap[curr]->next = nodeMap[curr->next];
        nodeMap[curr]->random = nodeMap[curr->random];
        curr = curr->next;
    }

    // Return the head of the new list
    return nodeMap[head];
