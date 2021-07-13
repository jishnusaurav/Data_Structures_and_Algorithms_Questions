queue<int> modifyQueue(queue<int> Queue, int k)
{
    //add code here.
    if (Queue.empty() == true
        || k > Queue.size())
        return Queue;
    if (k <= 0)
        return Queue;
 
    stack<int> Stack;
 
    /* Push the first K elements
       into a Stack*/
    for (int i = 0; i < k; i++) {
        Stack.push(Queue.front());
        Queue.pop();
    }
 
    /* Enqueue the contents of stack
       at the back of the queue*/
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
 
    /* Remove the remaining elements and
       enqueue them at the end of the Queue*/
    for (int i = 0; i < Queue.size() - k; i++) {
        Queue.push(Queue.front());
        Queue.pop();
    }
    return Queue;
