#include <stdio.h>
int main()
{
    int i,n,faktöriyel=1;
    printf("Sayı Giriniz: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    faktöriyel*=i;
    printf("%d",faktöriyel);
    return 0;
}