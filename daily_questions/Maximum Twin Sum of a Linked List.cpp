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
    ListNode* reverse(ListNode* &ptr)
    {
        ListNode* curr=ptr;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void createNode(ListNode* &head,ListNode* &tail,int value)
    {
        ListNode* temp=new ListNode(value);
        if( head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    int pairSum(ListNode* head) {
        ListNode* ptr=head;
        int value=0;
        ListNode* head2=NULL;
        ListNode* tail2=NULL;
        int m=0;

        while(ptr)
        {
            value=ptr->val;
            createNode(head2,tail2,value);
            ptr=ptr->next;
        }
        ListNode* head1=reverse(head2);
        while(head)
        {
            if(head1->val+head->val>m)
            m=head1->val+head->val;

            head1=head1->next;
            head=head->next;
        }
        return m;
        
    }
};
