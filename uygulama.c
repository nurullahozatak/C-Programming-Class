#include <stdio.h>
void secim1(void);

int main(){
    int secim;
    menu();
   while (secim!=3)
   {
        switch (secim){
        case 1:
        secim1();
        break;
        case 2:
        break;
        }

    }

menu();
scanf("%d",&secim);
}

void menu(void){
    printf("Seçim Menüsü");
    printf("1. Ters Üçgen");
    printf("2. Asal Sayı Yarım Üçgen");
    printf("3. Çıkış");
    printf("==>");
}

void secim1(void){

    int satir, i, j, n;

    printf("Satır sayısını girin: ");
    scanf("%d",&satir);

    for(i=satir; i>=1; --i)
    {
        for(n=0; n < satir-i; ++n)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
    }
}
