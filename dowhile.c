#include <stdio.h>
int main()
{
    char c;
    printf("Herhangi tuşa basın,çıkmak için c:\n ");
    do{
        scanf("%c",&c);
    }while(c!= 'c');
    return 0;
}