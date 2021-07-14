#include<cmath>
int countRev (string expr)
{
int len = expr.length();
    if (len%2)
       return -1;
    stack<char> s;
    for (int i=0; i<len; i++)
    {
        if (expr[i]=='}' && !s.empty())
        {
            if (s.top()=='{')
                s.pop();
            else
                s.push(expr[i]);
        }
        else
            s.push(expr[i]);
    }
    
    int red_len = s.size();
    int n = 0;
    while (!s.empty() && s.top() == '{')
    {
        s.pop();
        n++;
    }
    float a=float(n)/2;
    float b=float(red_len-n)/2;
    return (ceil(a) + ceil(b));
}
