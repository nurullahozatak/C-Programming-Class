#include <stdio.h>

int Pi= 3;

struct silindir{
  int tabanYaricapi;
  int yukseklik;
  int hacim;
};

void hacimHesapla(){
  struct silindir a;
  a.hacim = Pi*(a.tabanYaricapi)*(a.tabanYaricapi)*(a.yukseklik);
  printf("Hacim : %d", a.hacim);
  }
  
int main() {  
    
    struct silindir s;


    int *p;
    p = &s;

    
    printf("Yaricap : \n");
    scanf("%d", &s.tabanYaricapi );
    printf("Yukseklik : \n");
    scanf("%d", &s.yukseklik);
    hacimHesapla();
    return 0;
}
