bool detectLoop(Node* head)
    {

        unordered_set<Node*> s;
    while (head != NULL) {
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (s.find(head) != s.end())
            return true;
 
        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(head);
 
        head = head->next;
    }
 
    return false;
    }
