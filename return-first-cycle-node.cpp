Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head == NULL)
            return head;
        Node *fast=head,*slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                fast=head;
              while (fast != slow) {
                fast = fast->next;
                slow = slow->next;
              }
            return slow;
        }
        }
        
        return NULL;
}
