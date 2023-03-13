#include <stdio.h>
/* void fonksiyon1();
int a;
int main()
{
    int a=4;
    printf("%d\n",a);
    fonksiyon1();
    printf("%d\n",a);
    return 0;
}
void fonksiyon1()
{
    a=10;
    printf("%d\n",a);
} */

void yaz();
int a=4;
int main()
{
    printf("%d\n",a);
    yaz();
    return 0;
}
int b=5;
void yaz()
{
    printf("%d\n",b);
}