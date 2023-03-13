#include <stdio.h>
int main()
{
    int eb,i,n;
    int A[100];
    printf("Dizinin Eleman Sayısını Giriniz: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    eb=A[0];
    for(i=1;i<n;i++){
        if(eb<A[i]) eb=A[i];
    }
    printf("En Büyük Sayı :%d\n",eb);
    return 0;
}