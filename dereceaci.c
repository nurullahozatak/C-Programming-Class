#include<stdio.h>
void menu(void);
int main()
{
    int secim;
    float aci;

    menu();
    scanf("%d",&secim);
    while (secim != 3)
    {
        switch (secim)
        {
        case 1:
            printf("Radyan cinsinden açı => ");
            scanf("%f",&aci);
            printf("derece cinsinden açı &6.2f \n", aci / 3.141 * 180);
            break;
        
        case 2:
            printf("Derece cinsinden açı => ");
            scanf("%f",&aci);
            printf("radyan cinsinden açı &6.2f \n", aci / 180 * 3.141);
            break;
        }
        printf("Tekrar seçim yapın");
        menu();
        scanf("%d",&secim);
    }
    return 0;
}
void menu(void)
{
    printf("\n** Açı Radyan Dönüşümü **\n");
    printf("1. radyan => derece\n");
    printf("2. derece => radyan\n");
    printf("3. bitir\n");
    printf("Seçim ==> ");
}