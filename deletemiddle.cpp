int countOfNodes(struct Node* head)
{
    int count = 0;
    while (head != NULL) {
        head = head->next;
        count++;
    }
    return count;
}

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
     // Base cases
    if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    struct Node* copyHead = head;
 
    // Find the count of nodes
    int count = countOfNodes(head);
 
    // Find the middle node
    int mid = count / 2;
 
    // Delete the middle node
    while (mid-- > 1) {
        head = head->next;
    }
 
    // Delete the middle node
    head->next = head->next->next;
 
    return copyHead;
}
