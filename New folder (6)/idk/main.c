#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node * next;
};

int foo(struct node* lista_z,struct node* lista_bez)
{
    int p_z =0;
    int p_bez =0;

    lista_z=lista_z->next;
    while(lista_z!=NULL){
        if(lista_z->x%2==0)
            p_z++;
        lista_z = lista_z->next;
    }

    while(lista_bez!=NULL){
        if(lista_bez->x%2==0)
            p_bez++;
        lista_bez = lista_bez->next;
    }

    if(p_z==p_bez)
        return 1;

    return 0;
}

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
struct node* stworz_liste_glowa_bez(int n){
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
void wyswietlListeBezGlowa(struct node* lista)
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

int main()
{
    struct node * temp1 = stworz_liste_glowa(3);
    struct node * temp2 = stworz_liste_glowa_bez(3);
    wyswietlListeZGlowa(temp1);
    printf("\n");
    wyswietlListeBezGlowa(temp2);
    printf("\n");
    printf("%d",foo(temp1,temp2));
   //wyswietlListeZGlowa(foo(p));

    return 0;
}