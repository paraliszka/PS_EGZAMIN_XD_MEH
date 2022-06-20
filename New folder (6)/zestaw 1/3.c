#include <stdio.h>
#include <stdlib.h>

struct Osoba{
char *imie;
int wiek;
float wzrost;
};

char *foo(int n, struct Osoba tab[n])
{
    int najstarszy=tab[0].wiek;
    int licznik = 0;
    for(int i = 0;i<n;i++)
        if(najstarszy<tab[i].wiek)
            najstarszy = tab[i].wiek;
    for(int i = 0;i<n;i++)
        if(najstarszy==tab[i].wiek)
            return tab[i].imie;
}

int main()
{
    struct Osoba tab[2];
    tab[0].imie = "Harry";
    tab[0].wiek = 20;
    tab[0].wzrost = 1.81;

    tab[1].imie = "Hobbit";
    tab[1].wiek = 21;
    tab[1].wzrost = 1.90;

    printf("%s\n",foo(2,tab));
    return 0;
}