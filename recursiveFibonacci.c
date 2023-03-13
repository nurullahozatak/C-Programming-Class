#include <stdio.h>

int fibonacci(int);
int fibonacciR(int);

int main()
{
    int sayi;
    printf("Bir sayi girin: \n");
    scanf("%d",&sayi);

    printf("f(%d) : %d\n", sayi, fibonacci(sayi));
    printf("fr(%d) : %d\n", sayi, fibonacciR(sayi));
    return 0;
}
int fibonacci(int sayi){
    int sayi1 = 0;
    int sayi2 = 1;
    int sonuc = 0;
    for(int i=2;i<=sayi;i++){
        sonuc = sayi1 + sayi2;
        sayi1=sayi2;
        sayi2=sonuc;
    }
    return sonuc;
}

int fibonacciR(int sayi){
    if((sayi==0) || (sayi==1))
    return sayi;
    else
    return fibonacciR(sayi-1)+fibonacciR(sayi-2);
}