#include <stdio.h>
void zaman(int n);
int main()
{
   printf("Program basi..Bekleyiniz..\n");
   zaman(50000);
   printf("Program sonu..\n\n");
    return 0;
}
void zaman(int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++);
}