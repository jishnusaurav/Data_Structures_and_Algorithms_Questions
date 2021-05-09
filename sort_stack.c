void SortedStack :: sort()
{
   //Your code here
   stack<int> tmps;int tmp; stack<int> tmp2;

   while(!s.empty()){
       tmp=s.top();
       s.pop();
   
   while(!tmps.empty() && tmps.top()>tmp){
       s.push(tmps.top());
       tmps.pop();
   }
   
   tmps.push(tmp);
   
   }
    while(!tmps.empty()){
        int i=tmps.top();
        tmps.pop();
        tmp2.push(i);
    }
    while(!tmp2.empty()){
        int i=tmp2.top();
        tmp2.pop();
        s.push(i);
    }
}
