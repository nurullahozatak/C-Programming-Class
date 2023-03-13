#include <stdio.h>

int sekilbir();//fonksiyon tanımlandı
int sekiliki();//fonksiyon tanımlandı

int main()
{
    int secenek;

    while (1)
    {
        printf("Hangi sekli cizdirmek istiyorsunuz: \n1. Sekil\n2. Sekil\n3. Çıkış\n");
        scanf("%d", &secenek);
        if (secenek == 1)  //1.Şekil
        {
            printf("1.secenek\n");
            sekilbir();
        }

        else if (secenek == 2) //2.Şekil
        {
            printf("2. secenek\n");
            sekiliki();
        }

        else if (secenek == 3) //Çıkış
        {
            printf("Program sonlandiriliyor");
            break;
        }
        else
        {
            printf("Lutfen gecerli bir secenek gir !!\n");
        }
    }
    return 0;
}

int sekilbir()
{
    int satir, i, j, bosluk;

    printf("Satir sayisini girin: ");
    scanf("%d", &satir);
    printf("-------------------\n");

    for (i = satir; i >= 1; --i)
    {
        for (bosluk = 0; bosluk < satir - i; ++bosluk)
            printf("  ");

        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");

        for (j = 0; j < i - 1; ++j)
            printf("* ");

        printf("\n");
    }
}

int asalSayiKontrol(int sayi);

int sekiliki()
{

    int i, j, satir;
    int sayac = 2;

    printf("Asal sayi ucgeni kac satirli olsun\n");
    scanf("%d", &satir);
    printf("-------------------\n");

    for (i = 1; i <= satir; i++)
    {
        for (j = 1; j <= i; j++)
        {
            while (!asalSayiKontrol(sayac))
            {
                sayac++;
            }
            printf("%d ", sayac);
            sayac++;
        }
        printf("\n");
    }
    return (0);
}

int asalSayiKontrol(int sayi)
{
    int i, asalMi = 1;
    for (i = 2; i <= (sayi / 2); i++)
    {
        if (sayi % i == 0)
        {
            asalMi = 0;
            break;
        }
    }
    if (asalMi == 1 || sayi == 2)
        return 1;
    else
        return 0;
}