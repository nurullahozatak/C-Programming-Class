#include <stdio.h>
int main()
{
    char A[3]={'D','P','U'};
    int B[5]={1,2,3,4,5};
    
    for(int i=0;i<3;i++)
        printf("A[%d]:%c\n",i,A[i]);
    printf("\n");

    for(int i=0;i<5;i++)
        printf("B[%d]:%d\n",i,B[i]);    

    return 0;
}