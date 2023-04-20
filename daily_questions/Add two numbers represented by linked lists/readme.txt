class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* first)
    {
        struct Node* curr=first;
        struct Node* prev=NULL;
        struct Node* next=NULL;
        
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void createNode(struct Node* &head,struct Node* &tail,int val)
    {
        struct Node* ptr= new Node(val);
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
        }
        else
        {
            tail->next=ptr;
            tail=ptr;
        }
    }
    struct Node* sum(struct Node* first,struct Node* second)
    {
        int carry=0;
        int sum=0;
        int digit=0;
        struct Node* head=NULL;
        struct Node* tail=NULL;
        while(first||second||carry)
        {
            int val1=0;
            if(first!=NULL)
                val1=first->data;
            int val2=0;
            if(second!=NULL)
                val2=second->data;
                
            sum=val1+val2+carry;
            digit=sum%10;
            carry=sum/10;
            
            createNode(head,tail,digit);
            if(first) first=first->next;
            if(second) second=second->next;
        }
        return head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        struct Node* ans=sum(first,second);
        ans = reverse(ans);
        
    }
};
