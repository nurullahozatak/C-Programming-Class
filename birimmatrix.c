#include <stdio.h>
int main()
{
    int i,j,Dizi[4][4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            Dizi[i][j]=1;
            else
            Dizi[i][j]=0;
            printf("%3d",Dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}