class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp2=head;
        ListNode* temp=head;
       while(n--)
       {
           temp2=temp2->next;
       }
        if(temp2==nullptr)
        {
            return head->next;
        }
        else{
            while(temp2->next!=nullptr)
            {
                temp=temp->next;
                temp2=temp2->next;
            }
            
            
        }
          ListNode* tmp=temp->next;
            temp->next=tmp->next;
            delete tmp;  
        return head;
    }
};