//committed
push(int x)
{
        // Your Code
        q1.push(x);
        
        
}

//Function to pop an element from stack using two queues. 
pop()
{
        // Your Code     
        while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
        }
        q1.pop();
        while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
        }
}
