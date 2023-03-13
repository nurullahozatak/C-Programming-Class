#include<stdio.h>
int main()
{
    int *p;
    int x=555;

    p=&x;

    printf("x değeri %d ve adresi : %p\n",x,p);
    return 0;
}