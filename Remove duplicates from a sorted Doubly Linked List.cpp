Node * removeDuplicates(Node *head)
{
    if(head==NULL)
    return NULL;
    
    Node*curr=head;
    while(curr!=NULL&& curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            //Node*next_next=curr->next->next; 
           // Node*nodeToDelete=curr->next;
            delete(curr->next);
            curr->next=curr->next->next; 
        }
        else{
            curr=curr->next;
        }
    }
    
    return head;
    
}
