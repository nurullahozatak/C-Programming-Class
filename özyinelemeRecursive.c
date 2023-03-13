#include <stdio.h>

int faktoriyel(int);
int faktoriyelR(int);

int main()
{
    int sayi;
    printf("Bir sayı giriniz: \n");
    scanf("%d",&sayi);

    printf("%d\n",faktoriyel(sayi)); //normal
    printf("%d\n",faktoriyelR(sayi)); //recursive
    return 0;
}
int faktoriyel(int sayi){
    int sonuc=1;
    for(int i=sayi;i>=1;i--)
        sonuc*=i;
        return sonuc;
}
int faktoriyelR(int sayi){
    if(sayi <=1)
    return 1;
    else
    return sayi*faktoriyelR(sayi - 1);
}