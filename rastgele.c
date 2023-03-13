#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   
    int i;
    int dizi[10];
    srand(time(NULL));
    for(i=0;i<10;i++)
    dizi[i]=rand() % 100-15;
    for(i=0;i<10;i++)
    printf("%d\n",dizi[i]);
    return 0;
}