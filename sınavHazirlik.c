#include <stdio.h>
int fonk(int[],int);
void diziOku();
void diziCarp();
void diziYaz();

int i,j,k;
int A[3][3],B[3][3],C[3][3];

int main(){

   /* int a = 2;
    switch (a)
    {
    case 1:
        printf("X");
        //break;
        case 2:
        printf("X");
        //break;
        case 3:
        printf("X");
        //break;
        case 4:
        printf("X");
        //break;
    
    default:
    printf("X");
        break;
    } 

    char f43(char, int);

char sonuc='9'; 
char harf='A';
sonuc=f43(harf,100000); 
printf("%c",sonuc);
return 0;
}
char f43(char c,int i) {
i=42000;
return c+1; 


int x=0;
for (; x>=0; x-=2){
while(x>=-2){
x=x-2;
}
x=x-2;
}
printf("%d\n",x); */


diziOku();
diziCarp();
diziYaz();
return 0;
}

void diziOku(){
printf("A Dizisinin Elemanlarını Giriniz: ");
for(i=1;i<=3;i++){
    for(j=1;j<=3;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("B Dizisinin Elemanlarını Giriniz: ");
for(i=1;i<=3;i++){
    for(j=1;j<=3;j++){
        scanf("%d",&B[i][j]);
    }
}
}

void diziCarp(){
for(i=1;i<=3;i++){
    for(j=1;j<=3;j++){
        C[i][j] = 0;
        for(k=1;k<=3;k++){
            C[i][j] += A[i][k]*B[k][j];
        }
    }
}
}
void diziYaz(){
for(i=1;i<=3;i++){
    for(j=1;j<=3;j++){
        printf("%3d",C[i][j]);
    }
    printf("\n");
}
}