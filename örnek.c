#include <stdio.h>
int main()
{
char a;
printf("1-5 arasi bir rakam giriniz: "); 
scanf("%c",&a);
switch (a) {


case '1': printf("cok zayif \n");
break;
case '2': printf("zayif \n"); 
break; 
case '3': printf("orta \n"); 
break; 
case '4': printf("iyi \n"); 
break; 
case '5': printf("pekiyi \n"); 
break; 
default:  printf("yanlis secim \n");
}
return 0;
}