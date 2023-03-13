#include <stdio.h>
int topla2(int c,int d,int e);
float topla1(float a,float b);
void yazdir;

int main(void)
{
    float a=1.1,b=-9.0;
    int c=-21,d=1,e=2,sonuc;
    sonuc=topla2(c,d,e);
    printf("a+b=%5.2f\n",topla2(a,b));
    printf("c+d+e=%d\n\n",sonuc);
    yazdir();
    return 0;
}
float topla1(float a,float b){
return a+b;
}
int topla2(int c,int d,int e){
    return c+d+e;
}
void yazdir(){
    printf("ana fonksiyon icinden cagrildim ve\n");
    printf("yazdir() isimli fonksiyon tarafından yazdirildim\n\n");
}
