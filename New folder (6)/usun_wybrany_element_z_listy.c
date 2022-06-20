struct node* usun(struct node* Lista, int a)
{
    //Lista=Lista->next;
    if (Lista==NULL)
        return Lista;
    struct node *wsk,*wsk2;
    wsk=Lista;
    if(Lista->x==a)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next!=NULL)&&(wsk->next->x!=a))
        {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return Lista;
};