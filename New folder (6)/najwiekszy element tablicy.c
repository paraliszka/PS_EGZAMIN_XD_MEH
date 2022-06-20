#include <stdio.h>
#include <stdlib.h>

int najwiekszyElementTablicy(int **tab, int n, int m)
{
    int wynik=tab[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(tab[i][j]>wynik)
           {
               wynik=tab[i][j];
           }
        }
    }
    return wynik;
}

int **rezerwacja(int n,int m)
{
    int **tab=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=(int*)malloc(sizeof(int)*m);
    }
    return tab;
}

int main()
{
    int **tab=rezerwacja(4, 4);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            tab[i][j]=rand()%100+1;
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Indeks:[%d][%d]-Wartosc:%d\n", i, j, tab[i][j]);
        }
    }
    printf("%d", najwiekszyElementTablicy(tab, 4, 4));
    return 0;
}