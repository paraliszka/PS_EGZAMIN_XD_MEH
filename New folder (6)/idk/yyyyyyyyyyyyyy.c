#include <stdio.h>

struct element{
    int x;
    struct element * next;
};
void wyswietlListeBezGlowa(struct element* lista)
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


int *fun(struct element * a){
    if(a==NULL){
        printf("Pusta lista");
        return 0;
    }
    int *tab=(int*)malloc(sizeof(int*));
    a=a->next;
    int i=0;
    while(a!=NULL){
        *(tab+i)=a->x;
        a->next;
        i++;
    }
    return tab;
}


int main(void) {
    struct element * a= malloc(sizeof(struct element));
    struct element * b= malloc(sizeof(struct element));
    struct element * c= malloc(sizeof(struct element));
    struct element * d= malloc(sizeof(struct element));
    struct element * e= malloc(sizeof(struct element));
    b->x=2;
    c->x=3;
    d->x=4;
    e->x=5;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    wyswietlListeBezGlowa(a);
    fun(a);
    return 0;
}
struct node
{
   int x;
   struct node * next;
};

//usun wybrany element
struct node* usun(struct node* Lista)
{
   Lista=Lista->next;
   if (Lista==NULL)
       return Lista;
   struct node *wsk,*wsk2;


   wsk=Lista;

   while((wsk->next!=NULL)&&(wsk->next->x<0))




   {
       wsk=wsk->next;
   }
   if(wsk->next!=NULL)
   {
       wsk2=wsk->next;
       wsk->next=wsk2->next;
       free(wsk2);
   }


   return Lista;
};

struct node* stworz_liste_glowa(int n){
   struct node *z = malloc(sizeof(struct node));
   struct node *temp = z;

   for (int i = 0; i < n; i++) {
       if(rand()%3==1) {
           z->next = malloc(sizeof(struct node));
           z = z->next;
           z->x = -(rand() % 100 + 1);
           z->next = NULL;
       }
       else{
           z->next = malloc(sizeof(struct node));
           z = z->next;
           z->x = rand() % 100 + 1;
           z->next = NULL;
       }
   }
   return temp;
}


void wyswietlListeZGlowa(struct node* Lista)
/{
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
/}

double *rezerwuj(){
   double *tab=(double*)malloc(sizeof(double*)*2);
   tab[0]=5.2;
   tab[1]=-4.2;
   return tab;
}

int main()
{
   struct node * temp1 = stworz_liste_glowa(5);
   wyswietlListeZGlowa(temp1);
   printf("\n\n");
   wyswietlListeZGlowa(usun(temp1,25));

   double *tab = rezerwuj();
   for (int i = 0; i < 2; i++) {
       printf("%f",tab[i]);
   }


   int **tab=(int**)malloc(sizeof(int*)*4);

   for(int i=0;i<4;i++)
   {
       *(tab+i)=(int*)malloc(sizeof(int)*3);
   }

   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           tab[i][j]=rand()%90+10;
       }
   }

   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           printf(" %d ",tab[i][j]);
       }
       printf("\n");
   }










   wyswietlListeZGlowa(foo(p));

   return 0;
}