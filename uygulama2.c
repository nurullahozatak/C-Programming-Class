/* #include <stdio.h>
int sayiTopla(int n);
int main() {
    int num;
    printf("Sayı Gir: ");
    scanf("%d", &num);
    printf("Toplam = %d", sayiTopla(num));
    return 0;
}
 
int sayiTopla(int n) {
    if (n != 0)
        return n + sayiTopla(n - 1);
    else
        return n;
} */


 /* #include <stdio.h>

int main(){

    int dizi[5]={1,3,5,7,9};
    int sonuc;
    sonuc Sum(dizi,i);
    printf("Dizinin Toplamı : %d", sonuc);
    return 0;

}

int Sum(int[A], int N){
    //Base cases
    if(N==1) return A[0];
    if(N==0) return 0;

    int localSum; Sum(A,N-1);
//Merge
return localSum;
} */


/* #include <stdio.h>

double Power(double a, int n){
    if(n==1) return a;
    if(n==0) return 1;

    double partialResult;
    partialResult = Power(a, n-1);

    return partialResult * a;
}


int main(){
    double x;
    x = Power(3,4);
    printf("%f", x);
} */


#include <stdio.h>

int main() {
  int A[5] = {1, 2, 3 ,8, 5};
  int sonuc;
  sonuc = sum1(A, 5);
    printf("%d",sonuc);
  return 0;
    
}

int sum1(int A[], int N){
  if(N==1) return A[0];
  int middle = N/2;
  int localSum1 = sum1(&A[0], middle);
  int localSum2 = sum1(&A[middle], N-middle);
  return localSum1 + localSum2;
}