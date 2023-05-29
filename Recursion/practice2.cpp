Node* sum(Node* &head1 , Node* &head2 , Node* &list_head, Node* &list_tail,int& carry)
{
     
    if(head1==NULL&& head2==NULL)
    {
    if(carry!=0){
    insertAtTail(list_tail,carry);
    }
    return list_head;
    }



    if(head1 == NULL && head2 != NULL){
    int sc=head2->data+carry;
    carry=0;
    if(sc>=10){
    carry=sc/10;
    sc=sc%10;
    }
    insertAtTail(list_tail,sc);
    return sum(head1,head2->next,list_head,list_tail,carry);
    }

    

    if(head1 != NULL && head2 == NULL){
    int sc=head1->data+carry;
    carry=0;
    if(sc>=10){
    carry=sc/10;
    sc=sc%10;
    }
    insertAtTail(list_tail,sc);
    return sum(head1->next,head2,list_head,list_tail,carry);
    }

    else{
        
    int added=head1->data+head2->data+carry;
    carry=0;
    if(added>=10){
    carry=added/10;
    added=added%10;
    }
    insertAtTail(list_tail,added);

    return sum(head1->next,head2->next,list_head,list_tail,carry);
    }
    
}
