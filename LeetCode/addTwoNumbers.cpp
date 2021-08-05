
/*Q) You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* f=new ListNode(0);
        ListNode* z=f;
        int carry=0;
        while(l1!=NULL and l2!=NULL){
            ListNode* g=new ListNode(0);
            int a = l1->val + l2->val + carry;
            if(a>=10){
                g->val=a%10;
                carry=a/10;
                f->next=g;
            }
            else{
                g->val=a;
                f->next=g;
                carry=0;

            }
        f=f->next;
        l1=l1->next;
        l2= l2->next;
        }
        while(l1!=NULL){
            ListNode* g=new ListNode(0);
            int a = l1->val + carry;
            if(a>=10){
                g->val=a%10;
                carry=a/10;
                f->next=g;
            }
            else{
                g->val=a;
                f->next=g;
                carry=0;

            }
            f=f->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* g=new ListNode(0);
            int a = l2->val + carry;
            if(a>=10){
                g->val=a%10;
                carry=a/10;
                f->next=g;
            }
            else{
                g->val=a;
                f->next=g;
                carry=0;
            }
          f=f->next;
          l2=l2->next;
        }
        if(carry!=0){
          ListNode* g=new ListNode(carry);
          f->next=g;
        }
        return z->next;
        
    }
