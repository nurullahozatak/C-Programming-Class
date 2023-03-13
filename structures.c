/* #include <stdio.h>

struct kare
{
    int a;
};

int alan(struct kare r){
    return r.a*r.a;
}


int main()
{
    struct kare kare1;
    printf("Karenin uzunluğunu giriniz: ");
    scanf("%d",&kare1.a);

    printf("Karenin alanı: %d", alan(kare1));

    return 0;
}   */


#include <stdio.h>
struct mesafe {
    int metre;
    float cm;
};
struct oda {
    struct mesafe en;
    struct mesafe boy;
};


int main()
{
    struct oda salon;
    salon.en.metre=6;
    salon.en.cm = 20;
    salon.boy.metre = 5;
    salon.boy.cm = 27;
    float u = salon.en.metre + salon.en.cm/100;
    float g = salon.boy.metre + salon.boy.cm/100;
    printf(" Salon Alanı ..: %f metre kare dir.", u * g); 
    return 0;
}