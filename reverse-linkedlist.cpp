LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *dummy=NULL;

    while(head!=NULL){
        LinkedListNode<int> *nextNode=head->next;
        head->next=dummy;
        dummy=head;
        head=nextNode;
    }
    return dummy;
}
