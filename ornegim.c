#include <stdio.h>
int main()
{
    int i,j,a;
    printf("Sayı girin: ");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}