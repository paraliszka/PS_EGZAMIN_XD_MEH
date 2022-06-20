#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
        if(i%5==0 || i%7==0)
        suma+=i;
    return suma;
}

int main()
{
    printf("%d\n",foo(8));
    return 0;
}