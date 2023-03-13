#include <stdio.h>
int main()
{
    int f1=0,f2=1,sayi,i,temp;
    printf("Kac fibonacci sayisi yazılsın?: ");
    scanf("%d",&sayi);

    printf("%d ",f1);
    printf("%d ",f2);
    for(i=0;i<sayi-2;i++)
    {
        printf("%d ",f1+f2);
        temp=f1;
        f1=f2;
        f2=temp+f2;
    }
    return 0;
}