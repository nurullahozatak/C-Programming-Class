#include    <stdio.h>
int main()
{
    int sat;
    char ch;
    for(sat=1;sat<=5;sat++)
    {
        for(ch='z';ch>'z'-sat;ch=ch-1)
        printf("%c",ch);
        printf("\n");
    }
    return 0;
}
