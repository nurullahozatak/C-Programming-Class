#include <stdio.h>
int main()
{
    int i,j,k,toplam;
    int A[3][3],B[3][3],C[3][3];

    printf("A dizisinin elemanlarını giriniz: \n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&A[i][j]);

    printf("B dizisinin elemanlarını giriniz: \n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&B[i][j]);

    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        toplam=0;
        for(k=0;k<3;k++)
        {
            toplam+=A[i][k]*B[k][j];
            C[i][j]=toplam;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%10d",C[i][j]);
        printf("\n");
    }
    return 0;
}  