void Print(ListNode* temp)
{
    if(temp==NULL)
        return;
    cout<<temp->data;
    Print(temp->next);
}

//for reverse printing

void Print(ListNode* temp)
{
    if(temp==NULL)
        return;
    cout<<temp->data;
    Print(temp->next);
}
