#include <stdio.h>
#include <stdlib.h>
struct elem
{
    int i;
    struct elem * next;
};

int najwiekszyElementListy(struct elem*Lista, struct elem *Lista2)
{
    int wynik=Lista->i;
    while(Lista!=NULL)
    {
        if(Lista->i>wynik)
        {
            wynik=Lista->i;
        }
        Lista=Lista->next;
        if(Lista2->i>wynik)
        {
            wynik=Lista2->i;
        }
        Lista2=Lista2->next;
    }
    return wynik;
}
int *adresNajwiekszegoElementuListy(struct elem*Lista, struct elem *Lista2)
{
    int wynik=najwiekszyElementListy(Lista, Lista2);
    while(Lista!=NULL)
    {
        if(Lista->i==wynik)
        {
            return (int *)Lista->i;
        }
        Lista=Lista->next;
        if(Lista2->i==wynik)
        {
            return (int *)Lista2->i;
        }
        Lista2=Lista2->next;
    }
    return NULL;
}

int main()
{
    struct elem *l1=malloc(sizeof(struct elem));
    l1->i=4;
    l1->next=malloc(sizeof(struct elem));
    l1->next->i=5;
    l1->next->next=NULL;
    struct elem *l2=malloc(sizeof(struct elem));
    l2->i=4;
    l2->next=malloc(sizeof(struct elem));
    l2->next->i=10;
    l2->next->next=NULL;
    printf("%d\n", najwiekszyElementListy(l1, l2));
    printf("%p", adresNajwiekszegoElementuListy(l1, l2));
    return 0;
}