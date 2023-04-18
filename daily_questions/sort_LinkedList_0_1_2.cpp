/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

void Insert(Node* &tail,Node* ptr)
{
    tail->next=ptr;
    tail=ptr;
    
}


Node* sortList(Node *head)
{
    // Write your code here
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node* onehead=new Node(-1);
    Node* onetail=onehead;
    Node* twohead=new Node(-1);
    Node* twotail=twohead;

    Node* ptr=head;

    while(ptr!=NULL)
    {
        int data=ptr->data;
        if(data==0)
        Insert(zerotail,ptr);

        else if(data==1)
        Insert(onetail,ptr);

        else if(data==2)
        Insert(twotail,ptr);

        ptr=ptr->next;
    }
//mergeheads
    if(onehead->next!=NULL)
    {
        zerotail->next=onehead->next;
    }
    else
    {
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
//reframe the head
    head=zerohead->next;
//delete head
    delete(zerohead);
    delete(onehead);
    delete(twohead);

//return head
    return head;
}
