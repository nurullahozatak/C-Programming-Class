#include <stdio.h>
int main()
{
    int a=0;
    while (a<5)
    {
        if(a<3)
        {
            a+=2;
            printf("%d\n",a);
            continue;
        }
    
        else
        {
            printf("%d\n",a++);
            break;
        }
     printf("Döngünün Altı\n");
    }
     return 0;
}