#include <stdio.h>
int main()
{
    char c;
    printf("\nÇıkmak içim q tuşuna basınız!");
    c=getchar();
    while(c!='q')
    {
        c=getchar();
    }
    printf("\n Güle Güle");
    return 0;
}