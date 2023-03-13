#include <stdio.h>
void dizioku();
void dizicarp();
void diziyaz();

int i,j,k,toplam;
int A[3][3],B[3][3],C[3][3];

int main()
{
    dizioku();
    dizicarp();
    diziyaz();
    return 0;
}
void dizioku()
{
    printf("A dizisinin elemanlarını giriniz: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);

    printf("B dizisinin elemanlarını giriniz: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);        
}
void dizicarp()
{
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            C[i][j]=0;
            for(k=0;k<3;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
}
void diziyaz()
{
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        printf("%3d",C[i][j]);
        printf("\n");
    }
}