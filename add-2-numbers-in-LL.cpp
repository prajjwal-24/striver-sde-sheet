/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *list1, Node *list2)
{
    // Write your code here.
    if(!list1)
        return list2;
        if(!list2)
        return list1;
        int carry=0;
        Node *dummy=new Node();
        Node* temp=dummy;
        while(list1||list2||carry){
            int sum=0;
            if(list1){
                sum+=list1->data;
                list1=list1->next;
            }
            if(list2){
                sum+=list2->data;
                list2=list2->next;
            }
            sum+=carry;
            carry=sum/10;
            Node *newNode=new Node(sum%10);
            temp->next=newNode;
            temp=temp->next;
        }
        
        return dummy->next;

}
