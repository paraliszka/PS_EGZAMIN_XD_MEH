struct node* stworz_liste_glowa(int n){
    struct node *z = malloc(sizeof(struct node));
    struct node *temp = z;

    for (int i = 0; i < n; i++) {
        z->next = malloc(sizeof(struct node));
        z=z->next;
        z->x = rand()%100+1;
        z->next = NULL;
    }
    return temp;
}
void wyswietlListeZGlowa(struct node* Lista)
{
    struct node *temp = Lista -> next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->x);
        temp=temp->next;
    }
}
stworz_liste_glowa_bez(int n){
    struct node *z = malloc(sizeof(struct node));
    struct node *temp = z;
    z->x = rand()%100+1;

    for (int i = 0; i < n-1; i++) {
        z->next = malloc(sizeof(struct node));
        z=z->next;
        z->x = rand()%100+1;
        z->next = NULL;
    }
    return temp;
}
wyswietlListeBezGlowa(struct node* lista)
{
    if(lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(lista!=NULL)
    {
        printf("%d\n",lista->x);
        lista=lista->next;
    }
}