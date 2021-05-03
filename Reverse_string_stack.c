void reverse(char str[])
{
    // Create a stack of capacity
    //equal to length of string
    int n = strlen(str);
    Stack* stack = createStack(n);
 
    // Push all characters of string to stack
    int i;
    for (i = 0; i < n; i++)
        push(stack, str[i]);
 
    // Pop all characters of string and
    // put them back to str
    for (i = 0; i < n; i++)
        str[i] = pop(stack);
}
 
