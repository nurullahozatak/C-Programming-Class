#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int secenek;
    
    printf("Oyun 1 icin 1'e tiklayiniz\nOyun 2 icin 2'ye tiklayiniz\n\t\a\b");
    scanf("%d",&secenek);
    
    switch(secenek){
    
    case 1:
   



    double puan=0;
    double hatat=0; //hata toplam
    double b2=0;    // başarısız
    double b1=0; //başarılı
    double y=0;  //yakın
    double ates;
    double hata_orani;
    for(int a=1;a<=10;a++){
        srand(time(0));
        double hedef = (rand() % 10) + 1;
        
        printf("%d. Roundun Hedefinine Ates Edin \n",a);
        scanf("%lf",&ates);
            //kucuk 1.
            if(ates<hedef){
                hata_orani=hedef-ates;
                hatat=hatat+hata_orani;
                if(hata_orani<=0.5){
                    puan=puan+5;
                    y=y+1;
                    printf("Cok yaklastiniz 5 puan kazandiniz. Hata oraniniz = %.1lf \n",hata_orani);
                }
                else{
                    b2=b2+1;
                    printf("Basarisiz atis gerceklestirdiniz...Hata oraniniz = %.1lf \n",hata_orani);
                    }
            }
            //buyuk 2.
            else if(hedef<ates){
                hata_orani=ates-hedef;
                hatat=hatat+hata_orani;
                if(hata_orani<=0.5){
                    puan=puan+5;
                    y=y+1;
                    printf("Cok yaklastiniz 5 puan kazandiniz. Hata oraniniz = %.1lf \n",hata_orani);
                }
                else {
                    b2=b2+1;
                    printf("Basarisiz atis gerceklestirdiniz...Hata oraniniz = %.1lf \n",hata_orani);
                    }
            }
            //vurus 3.
            else{
                b1=b1+1;
                puan=puan+10;
                printf("Basarili atis gerceklestirdiniz 10 puan kazandiniz \n");
                }
    }
        printf("10 Atistaki Toplam Hataniz = %.1lf \n",hatat);
        printf("10 Atistaki Toplam Puaniniz = %.1lf \n",puan);
        printf("10 Atistaki Toplam Basarili Atis Sayiniz = %.1lf \n",b1);
        printf("10 Atistaki Toplam Yakin Basarili Atis Sayiniz = %.1lf \n",y);
        printf("10 Atistaki Toplam Basarisiz Atis Sayiniz = %.1lf \n",b2);

    return 0;

break;

case 2:
int sayi,tahmin,skor;
    int a,b,c ;
    skor=100;

    srand(time(0)); // rastgele sayı üretebilmek için seed'i belirle
    sayi=100+rand()%900;//100 ile 999 arasında bir sayı üret
                        
    printf("Lutfen 3 basamakli bir sayi tahmin edin: ");
    scanf("%d",&tahmin);


    while (tahmin!=sayi && skor>0) //tahmin doğru değil ve skor sıfırdan büyükse
    {     
       if(tahmin>=1000) 
         {
           printf("gecersiz islem, tekrar deneyin\n");
         }
    skor-=10; // skoru 10 puan azalt
       
     
           if (tahmin/100==sayi/100) // ilk basamak doğruysa
            a=1;
            else if ((tahmin/100)==(sayi%10)) // birler için
            a=9;
           else if ((tahmin/100)==(sayi/10)%10) // onlar için
            a=9;
            else 
            a=0;


           if ((tahmin/10)%10==(sayi/10)%10) // ikinci basamak doğruysa
            b=1;
           else if ((tahmin/10)%10==sayi/100) // ikinci basamak doğru rakam ama yanlış yerdeysse
            b=9;
           else if ((tahmin/10)%10 == sayi%10)
            b=9;
            else
            b=0;
       
       

            if (tahmin%10==sayi%10) // üçüncü basamak doğruysa
            c=1;
            else if (tahmin%10==(sayi/10)%10) // üçüncü basamak doğru rakam ama yanlış yerdeysse
            c=9;
            else if (tahmin%10==sayi/100)
            c=9; 
            else
            c=0;
    
         
        printf("Ipucu:%d%d%d\n",a,b,c); // ipucuyu göster
        printf("Lutfen tekrar bir sayi tahmin edin: ");
        scanf("%d",&tahmin);
     
    }
     
    if (tahmin==sayi) // tahmin doğruysa
        printf("Tebrikler! Dogru tahmin ettiniz. Skorunuz: %d\n",skor);
    else // tahmin yanlış ve skor sıfıra ulaşmışsa
        printf("Maalesef, tahmin hakkiniz bitti. Sayi: %d\n",sayi);


break;


return 0;}}