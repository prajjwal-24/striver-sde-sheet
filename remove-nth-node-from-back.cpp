/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==NULL){
            return head;
        }
       int count=0;
       ListNode *temp=head;
       while(temp){
           temp=temp->next;
           count++;
       }
       cout<<count<<"\n";
       if(count==n){
            head=head->next;
            return head;
        }
       // nth node from end is count-n th node from beginning
       ListNode *curr=head;
       int currCount=0;
       while(curr){
           
          
           if(currCount==count-n-1){
               curr->next=curr->next->next;
           }
        //    prev=curr;
            currCount++;
           curr=curr->next; 
       }
       cout<<currCount<<"\n";
       return head;
    }
};
