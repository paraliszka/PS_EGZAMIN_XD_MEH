#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node * next;
};

struct node* foo(struct node* lista1,struct node* lista2)
{
    struct node *z = malloc(sizeof(struct node));
    struct node *temp = z;

    lista1=lista1->next;
    lista2=lista2->next;

    while(lista1!=NULL){

        z->next = malloc(sizeof(struct node));
        z=z->next;

        if(lista1->x > lista2->x)
            z->x = lista1->x;
        else
            z->x = lista2->x;

        z->next = NULL;

        lista1=lista1->next;
        lista2=lista2->next;
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

int main()
{
    struct node *p = malloc(sizeof(struct node));
    struct node *q = malloc(sizeof(struct node));
    struct node *r = malloc(sizeof(struct node));
    struct node *s = malloc(sizeof(struct node));

    q->x = 4;
    r->x = 5;
    s->x = 7;

    p->next = q;
    q->next = r;
    r->next = s;
    s->next = NULL;

    struct node *a = malloc(sizeof(struct node));
    struct node *b = malloc(sizeof(struct node));
    struct node *c = malloc(sizeof(struct node));
    struct node *d = malloc(sizeof(struct node));

    b->x = 1;
    c->x = 10;
    d->x = 1;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    
    wyswietlListeZGlowa(foo(a,p));

    return 0;
}