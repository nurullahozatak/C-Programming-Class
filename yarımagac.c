#include<stdio.h>
int main()
{
    int satir, i, j, n;

    printf("Satır sayısını girin: ");
    scanf("%d",&satir);

    for(i=satir; i>=1; --i)
    {
        for(n=0; n < satir-i; ++n)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
    }

    return 0;
}