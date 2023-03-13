#include <stdio.h>
void tablo(int no);
int main()
{
    int sayi;
    printf("\nBir sayi giriniz: ");
    scanf("%d",&sayi);
    tablo(sayi);
    return 0;
}
void tablo(int no)
{
    int n=0;
    printf("\n\n %d icin carpim tablosu\n",no);
    for(n=1;n<=10;n++)
        printf("\n %d * %d = %d",no,n,(no*n));
}