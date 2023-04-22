/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    void createNode(Node* &head,Node* &tail,int value)
    {
        Node* temp=new Node(value);
        if(head==NULL)
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
    public:
    Node *copyRandomList(Node *head)
    {
        //Write your code here
        //copy normal list
        Node* ptr1=head;
        Node* tail2=NULL;
        Node* head2=NULL;
        int dummy=0;
        while(ptr1!=NULL)
        {   
            dummy=ptr1->val;
            createNode(head2,tail2,dummy);
            ptr1=ptr1->next;
        }
        ptr1=head;
        Node* ptr2=head2;
        Node* temp1=head;
        Node* temp2=head2;
        
        
        while(ptr1!=NULL)
        {
            while(temp1!=NULL)
            {
                if(ptr1->random==temp1){
                ptr2->random=temp2;
                break;
                }
                
                else
                {
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
            }
            temp1=head;
            temp2=head2;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return head2;
    }
};
