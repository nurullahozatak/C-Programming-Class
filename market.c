#include <stdio.h>
int main()
{
   int toplam=0,x,i,temp;
   int a=120, b=6 ,c=320; 
   int f =190;
   printf("a = 120,b = 6 , c = 320");
   printf("Aldığınız ürünlerin kodunu Giriniz:'a,b,c' :");
   
   scanf("%d",&x);
   /*
   for(i=0;i<x;i++){b
   
       toplam=x;
       printf("%d",toplam);
   }
   */
  for( i=0;i<3;i+=1)
  {
      printf("sepete başka ürün eklemek için 190'a  basınız");

      scanf("%d",&f);
    if(f==190){

        printf("bas");

        scanf("%d",&f);
    }else{
        break;
    }
  }

    return 0;
}