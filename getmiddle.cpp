int getMiddle(Node *head)
{
   // Your code here
   if(head!=NULL){
   Node *front1 = head;
   Node *front2 = head;
  if (head!=NULL)
        {
   while(front2!=NULL and front2->next != NULL){
       front1=front1->next;
       front2=front2->next->next;
   }
return front2->data;
       
   }
}}

