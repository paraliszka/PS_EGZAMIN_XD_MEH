#include <stdio.h>
#include <stdlib.h>

struct node {
float x;
struct node * next;
};

int fuuj(struct node *p)
{
    if(p == NULL)
        return 0;
    int i = 1;
    while(p->next != NULL)
    {
        if(p->x < 0)
            {
                i=0;
            }
        p=p->next;
    }
    return i;
}

int main()
{
    struct node *p = malloc(sizeof(struct node));
    struct node *q = malloc(sizeof(struct node));
    struct node *r = malloc(sizeof(struct node));
    // tutaj mallocujemy wartosci listy

    p->x = 2.8;
    q->x = -3.2;
    r->x = 3.7;
    //ustalamy wartosci

    p->next = q;
    q->next = r;
    r->next = NULL;
    printf("%d\n",fuuj(p));
    return 0;
}