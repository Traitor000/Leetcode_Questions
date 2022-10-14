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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* q=head;
        ListNode* temp=head;
        float cnt=0;
        while(q!=nullptr)
        {
            cnt+=1;
            q=q->next;
        }
        if(cnt==1){return nullptr;}
        float middle=floor(cnt/2);
        middle-=1;
        while(middle--)
        {
            temp=temp->next;
        }
        ListNode* p=temp->next;
        temp->next=p->next;
        delete p;
        return head;
        
        
    }
};