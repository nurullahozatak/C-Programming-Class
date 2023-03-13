#include <stdio.h>

int fonk(int[],int);

int main()
{
    int sonuc;
    int dizi[5]={3,4,7,1,9};
    sonuc=fonk(dizi,5);
    printf("%d",sonuc);
    return 0;
}
int fonk(int d[],int s)
{
    int t=0;
    for(int i=0;i<s;i++){
        t+=d[i];
    }
    return t;
}