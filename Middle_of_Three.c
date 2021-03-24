
class Solution{
  public:
    int middle(int a, int b, int c){
        //code here//Position this line where user code will be pasted.
        if (a > b) 
    {
        if (b > c)
            return b;
        else if (a > c)
            return c;
        else
            return a;
    }
    else 
    {
        // Decided a is not greater than b.
        if (a > c)
            return a;
        else if (b > c)
            return c;
        else
            return b;
    }

    }
};
